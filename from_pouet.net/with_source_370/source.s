; Boy Meets Pixel: a minimalist digital animation film in 4Kb.
; ---------------
; Concept from http://www.flipflopflying.com
; Compression by Colas Schretter <colas@planet-d.net>

org 100h
section .text

%define SPEED 18

%define end_block       0
%define print           1*2
;%define black_bubble    2*2
;%define white_bubble    3*2
%define black_speak_right_bubble  2*2
%define white_speak_right_bubble  3*2
%define black_speak_left_bubble   4*2
%define white_speak_left_bubble   5*2
%define white_think_left_bubble   6*2
%define putsprite       7*2
%define putsprite_x2    8*2
%define putsprite_x4    9*2
%define putsprite_x8    10*2
%define rectangle       11*2
%define print_color     12*2
%define movesprite      13*2
%define movesprite_x2   14*2
%define movesprite_x4   15*2
%define movesprite_x8   16*2
%define exit            17*2

	
;=============================================================================
%macro BLOCK 2
dw %1, %2
%endmacro

%macro ENDBLOCK 0
db end_block
%endmacro

%macro EXIT 0
db exit
%endmacro

%macro PRINT 3
db print
dw %1 ; string
dw (%3)*320 + %2
%endmacro

%macro PRINT_COLOR 5
db print_color
dw %1 ; string
dw (%3)*320 + %2
db %4, %5 ; back color, text color
%endmacro

%macro WHITE_BUBBLE 3
db white_bubble
dw %1 ; string
dw (%3)*320 + %2
%endmacro

%macro BLACK_BUBBLE 3
db black_bubble
dw %1 ; string
dw (%3)*320 + %2
%endmacro

%macro BLACK_RIGHT_BUBBLE 3
db black_speak_right_bubble
dw %1 ; string
dw (%3)*320 + %2
%endmacro

%macro BLACK_LEFT_BUBBLE 3
db black_speak_left_bubble
dw %1 ; string
dw (%3)*320 + %2
%endmacro

%macro WHITE_RIGHT_BUBBLE 3
db white_speak_right_bubble
dw %1 ; string
dw (%3)*320 + %2
%endmacro

%macro WHITE_LEFT_BUBBLE 3
db white_speak_left_bubble
dw %1 ; string
dw (%3)*320 + %2
%endmacro

%macro WHITE_LEFT_THINK 3
;WHITE_BUBBLE %1, %2, %3
;PUTSPRITE white_think_left,%2,%3-8+23
db white_think_left_bubble
dw %1 ; string
dw (%3)*320 + %2
%endmacro

%macro SETCOLOR 4
db setcolor, %1, %2, %3, %4 ; index r g b
%endmacro

%macro RECTANGLE 5
db rectangle
dw (%2)*320 + %1, %3 ; beginoffset width 
db %4, %5 ; height colorindex
%endmacro

%macro PUTSPRITE 3
db putsprite
dw %1 ; sprite
dw (%3)*320 + %2
%endmacro

%macro PUTSPRITE_X2 3
db putsprite_x2
dw %1 ; sprite
dw (%3)*320 + %2
%endmacro

%macro PUTSPRITE_X4 3
db putsprite_x4
dw %1 ; sprite
dw (%3)*320 + %2
%endmacro

%macro PUTSPRITE_X8 3
db putsprite_x8
dw %1 ; sprite
dw (%3)*320 + %2
%endmacro

%macro MOVESPRITE 5
db movesprite
db %1, %2 ; dirx diry
dw %3 ; sprite 
dw (%5)*320 + %4
%endmacro

%macro MOVESPRITE_X2 5
db movesprite_x2
db %1, %2 ; dirx diry
dw %3 ; sprite 
dw (%5)*320 + %4
%endmacro

%macro MOVESPRITE_X4 5
db movesprite_x4
db %1, %2 ; dirx diry
dw %3 ; sprite 
dw (%5)*320 + %4
%endmacro

%macro MOVESPRITE_X8 5
db movesprite_x8
db %1, %2 ; dirx diry
dw %3 ; sprite 
dw (%5)*320 + %4
%endmacro

;=============================================================================
%macro DEPRECATED_SQUARE_BUBBLE 6; posx posy lx, ly, bordercolor, backcolor
RECTANGLE %1, %2, %3, %4, %5
RECTANGLE %1+1, %2+1, %3-2, %4-2, %6
%endmacro

%macro DEPRECATED_BLACK_BUBBLE 3 ; posx posy length
PUTSPRITE black_single_bubble_left,%1-5-3,%2-8
PUTSPRITE black_single_bubble_right,%1+4+%3,%2-8
RECTANGLE %1-5, %2-8, %3+9,24,0
RECTANGLE %1-5, %2-8+1, %3+9,22,15
%endmacro

%macro DEPRECATED_BLACK_RIGHT_BUBBLE 3 ; posx posy length
BLACK_BUBBLE %1, %2, %3
PUTSPRITE black_speak_right,%1-8+%3,%2-8+23
%endmacro

;=============================================================================
;todo: ajouter du design pour les ecrans de titres (rectangles a la jap / bubbles)
%macro TITLE_PART 1
BLOCK %1+0*SPEED,%1+3*SPEED
PRINT title_01,12*8,86 ; Colas of Aspirine
PRINT title_02,18*8,96 ; and
PRINT title_03,10*8,106 ; Flip Flop Flying'Boy
ENDBLOCK

BLOCK %1+4*SPEED,%1+6*SPEED
PRINT title_04,16*8,96 ; presents
ENDBLOCK

BLOCK %1+7*SPEED,%1+9*SPEED
PRINT title_05,11*8,96 ; the story of a boy
ENDBLOCK

BLOCK %1+10*SPEED,%1+12*SPEED
PRINT title_06,10*8,96 ; the story of a pixel
ENDBLOCK

BLOCK %1+13*SPEED,%1+15*SPEED
PRINT title_07,101,97 ; Boy Meets Pixel
;PRINT title_07,100,96 ; Boy Meets Pixel
PRINT_COLOR title_07,100,96, 40, 0 ; Boy Meets Pixel
ENDBLOCK

BLOCK %1+16*SPEED,%1+20*SPEED
PUTSPRITE boy_head_right,133,87 ; Boy head
PUTSPRITE boy_body,133,87+6 ; Boy body
PUTSPRITE hearth,151,92 ; Love
PUTSPRITE pixel,180,98 ; Pixel
ENDBLOCK
%endmacro

; ---------------------------------------------------------------------------
%macro EPISODE1 1
BLOCK %1+0,%1+2*SPEED
BLACK_RIGHT_BUBBLE ep1_01,120,60 ; Hello
PUTSPRITE boy_head_left,200,120 ; Boy head
PUTSPRITE boy_body,200,120+6 ; Boy body
ENDBLOCK

BLOCK %1+3*SPEED,%1+5*SPEED
BLACK_RIGHT_BUBBLE empty_20,12,60+4 ; My name is
PRINT ep1_02,12,60 ; My name is
PRINT title_03,12,60+8 ; Flip Flop Flying'Boy
PUTSPRITE_X2 boy_head_left,200,100 ; Boy head
PUTSPRITE_X2 boy_body,200,100+6*2 ; Boy body
ENDBLOCK

BLOCK %1+6*SPEED,%1+8*SPEED
BLACK_RIGHT_BUBBLE ep1_03,50,60 ; This is my story
PUTSPRITE_X8 boy_head_left,200,76 ; Boy head
PUTSPRITE_X8 boy_body,200,76+6*8 ; Boy body
ENDBLOCK

BLOCK %1+9*SPEED,%1+11*SPEED
BLACK_LEFT_BUBBLE ep1_04,80,40 ; I've been in love before...
PUTSPRITE_X8 boy_head_right,40,76 ; Boy head
PUTSPRITE_X8 boy_body,40,76+6*8 ; Boy body
ENDBLOCK

BLOCK %1+12*SPEED,%1+13*SPEED
PRINT ep1_05,12*8,40 ; with a box
ENDBLOCK

BLOCK %1+14*SPEED,%1+16*SPEED
MOVESPRITE_X4 0,-20,boy_head_left,148,100 ; Boy head
MOVESPRITE_X4 0,-20,boy_body,148,100+6*4 ; Boy body
ENDBLOCK

BLOCK %1+12*SPEED,%1+16*SPEED
;PUTSPRITE box_top,100,100 ; Box
PUTSPRITE box_top_left,100,100 ; Box left
PUTSPRITE box_top_right,192,100 ; Box left
RECTANGLE 127,109,65,10,65 ; cap
RECTANGLE 116,119,87,1,139 ; top border
RECTANGLE 126,120,67,46,114 ; box border
RECTANGLE 127,121,65,44,139 ; box content
RECTANGLE 0,166,320,180-166,15 ; down white mask
ENDBLOCK

BLOCK %1+17*SPEED,%1+18*SPEED
PRINT ep1_06,7*8,40 ; with a pharmacy sign
ENDBLOCK

BLOCK %1+17*SPEED,%1+21*SPEED
PUTSPRITE_X2 boy_head_right,200,120 ; Boy head
PUTSPRITE_X2 boy_body,200,120+6*2 ; Boy body
;PUTSPRITE_X2 pharmacy_1,260,40 ; cross
RECTANGLE 256, 58, 27*2, 9*2, 48
RECTANGLE 274, 40, 9*2, 27*2, 48
RECTANGLE 256+2, 58+2, 25*2, 7*2, 192
RECTANGLE 274+2, 40+2, 7*2, 25*2, 192
RECTANGLE 256+4, 58+4, 23*2, 5*2, 48
RECTANGLE 274+4, 40+4, 5*2, 23*2, 48
RECTANGLE 256+6, 58+6, 21*2, 3*2, 192
RECTANGLE 274+6, 40+6, 3*2, 21*2, 192
RECTANGLE 256+8, 58+8, 19*2, 1*2, 48
RECTANGLE 274+8, 40+8, 1*2, 19*2, 48
ENDBLOCK

;BLOCK %1+(17*SPEED+9),%1+18*SPEED
;SETCOLOR 48, 0, 64, 0
;SETCOLOR 192, 0, 252, 0
;ENDBLOCK
;BLOCK %1+18*SPEED,%1+(18*SPEED+9)
;SETCOLOR 48, 0, 252, 0
;SETCOLOR 192, 0, 64, 0
;ENDBLOCK

;BLOCK %1+(18*SPEED+9),%1+19*SPEED
;PUTSPRITE_X2 pharmacy_2,260,40 ; cross2
;ENDBLOCK
;BLOCK %1+(19*SPEED+9),%1+20*SPEED
;PUTSPRITE_X2 pharmacy_2,260,40 ; cross2
;ENDBLOCK
;BLOCK %1+(20*SPEED+9),%1+21*SPEED
;PUTSPRITE_X2 pharmacy_2,260,40 ; cross2
;ENDBLOCK

BLOCK %1+22*SPEED,%1+23*SPEED
PRINT ep1_07,5*8,40 ; with a pair of sunglasses
ENDBLOCK

BLOCK %1+22*SPEED,%1+26*SPEED
PUTSPRITE_X8 boy_head_left,60,60 ; Boy head
PUTSPRITE_X8 boy_body,60,60+6*8 ; Boy body
PUTSPRITE sunglasses,64,60+24 ; sunglasses
ENDBLOCK

BLOCK %1+23*SPEED,%1+26*SPEED
PUTSPRITE_X4 boy_arm_yeah,60+6*8,60+11*8 ; Boy arm
ENDBLOCK

BLOCK %1+27*SPEED,%1+31*SPEED
BLACK_RIGHT_BUBBLE empty_25, 16,40+4 ;25*8
PRINT ep1_08,16,40 ; but nothing ...
PRINT ep1_09,16,40+8 ; like the love ...
PUTSPRITE_X2 boy_head_left,260,100 ; Boy head
PUTSPRITE_X2 boy_body,260,100+6*2 ; Boy body
ENDBLOCK
%endmacro

; ---------------------------------------------------------------------------
%macro EPISODE2 1
BLOCK %1+0*SPEED,%1+3*SPEED
WHITE_RIGHT_BUBBLE ep2_01,20,50 ; I first met Pixel here
PUTSPRITE_X8 boy_head_left,240,60 ; Boy head
PUTSPRITE_X8 boy_body,240,60+6*8 ; Boy body
PUTSPRITE sunglasses,244,60+24 ; sunglasses
ENDBLOCK

BLOCK %1+3*SPEED,%1+8*SPEED
RECTANGLE 0,20,320,130,132 ; background
;RECTANGLE 0,20+130,320,30,200 ; floor
RECTANGLE 20,40,240,110,200 ; club color
RECTANGLE 0,60,20,90,200 ; club side

PUTSPRITE boy_head_left,240,140 ; Boy head
PUTSPRITE boy_body,240,140+6 ; Boy body

PRINT ep2_wired01,30+1,60+1 ; Wired
PRINT ep2_wired01,30,60 ; Wired
ENDBLOCK

BLOCK %1+4*SPEED,%1+5*SPEED
PRINT ep2_wired02,30+11*8,60 ; niteclub
ENDBLOCK
BLOCK %1+6*SPEED,%1+7*SPEED
PRINT ep2_wired02,30+11*8,60 ; niteclub
ENDBLOCK

BLOCK %1+8*SPEED,%1+19*SPEED
PUTSPRITE_X4 boy_head_left,200+26,180-16*4 ; Boy head
PUTSPRITE_X4 table,200,180-10*4 ; table
PUTSPRITE cendar,200+7,180-10*4+41 ; cendar
PUTSPRITE small_sunglasses,200+26,180-16*4+12 ; sunglasses
PUTSPRITE cigarette,200+34,180-10*4+41 ; cigarette
ENDBLOCK

BLOCK %1+8*SPEED,%1+12*SPEED
WHITE_RIGHT_BUBBLE empty_19, 40,80+4 ;19*8
PRINT ep2_02,40,80 ; she was working as
PRINT ep2_03,40,80+8 ; a coktail ...
ENDBLOCK

BLOCK %1+13*SPEED,%1+15*SPEED
PRINT ep2_04,32,50 ; I heard ...
ENDBLOCK

BLOCK %1+16*SPEED,%1+19*SPEED
WHITE_RIGHT_BUBBLE ep2_05,150,40 ; what can i get you?
ENDBLOCK

BLOCK %1+19*SPEED,%1+23*SPEED
PUTSPRITE_X8 table,60,180-5*8 ; table
PUTSPRITE_X2 cigarette,60+68,180-6 ; cigarette
ENDBLOCK

BLOCK %1+19*SPEED,%1+19*SPEED+9
PUTSPRITE_X8 boy_head_left,60+56,180-11*8 ; Boy head
PUTSPRITE sunglasses,60+56+4,180-11*8+24 ; sunglasses
ENDBLOCK

BLOCK %1+19*SPEED+9,%1+20*SPEED
PUTSPRITE_X8 boy_head_right,60+56-8,180-11*8 ; Boy head
PUTSPRITE sunglasses,60+64+4,180-11*8+24 ; sunglasses
RECTANGLE 60+8*8,180-2*8-44,8,44,89 ; arm
RECTANGLE 60+6*8,180-8,8,8,200 ; backpixel
;PUTSPRITE_X8 black_pixel,60+6*8,180-8 
ENDBLOCK

BLOCK %1+20*SPEED,%1+23*SPEED
PRINT ep2_06,12,50 ; i saw
PUTSPRITE_X8 boy_head_right,60+56-8,180-11*8 ; Boy head
PUTSPRITE sunglasses,60+64+4,180-11*8+32 ; sunglasses
RECTANGLE 60+8*8,180-2*8-36,8,36,89 ; arm
RECTANGLE 60+6*8,180-8,8,8,200 ; backpixel
;PUTSPRITE_X8 black_pixel,60+6*8,180-8 
ENDBLOCK

BLOCK %1+23*SPEED,%1+26*SPEED
PRINT ep2_07,60,50 ; an angel
ENDBLOCK

BLOCK %1+26*SPEED,%1+28*SPEED
PRINT ep2_08,80,50 ; a small
ENDBLOCK

BLOCK %1+29*SPEED,%1+31*SPEED
PUTSPRITE_X8 boy_head_right,-20+56-8,180-11*8 ; Boy head
PUTSPRITE_X8 table,-20,180-5*8 ; table
PUTSPRITE_X2 cigarette,-20+68,180-6 ; cigarette
WHITE_LEFT_BUBBLE ep2_09,120,60 ; a pina colada
ENDBLOCK

BLOCK %1+31*SPEED+9,%1+33*SPEED+9
PRINT ep2_10,92,96 ; 3 minutes
ENDBLOCK

BLOCK %1+34*SPEED,%1+43*SPEED
PUTSPRITE_X8 boy_head_right,-20+56-8,180-11*8 ; Boy head
PUTSPRITE_X8 table,-20,180-5*8 ; table
PUTSPRITE_X2 cigarette,-20+68,180-6 ; cigarette
PUTSPRITE empty_glass,140,180-23 ; glass
PUTSPRITE glass_content,140,180-32 ; content of glass
ENDBLOCK

BLOCK %1+34*SPEED,%1+36*SPEED
WHITE_LEFT_BUBBLE ep2_11,120,60 ; thank you
ENDBLOCK

BLOCK %1+37*SPEED,%1+39*SPEED
PRINT ep2_12,20,50 ; I tipped
ENDBLOCK

BLOCK %1+40*SPEED,%1+42*SPEED
PRINT ep2_13,40,50 ; she paused
ENDBLOCK

BLOCK %1+43*SPEED,%1+45*SPEED
WHITE_RIGHT_BUBBLE ep2_14,200,60 ; my name is ...
ENDBLOCK

BLOCK %1+45*SPEED,%1+50*SPEED
PUTSPRITE pixel,100,100 ; pixel
ENDBLOCK

BLOCK %1+47*SPEED,%1+50*SPEED
WHITE_LEFT_BUBBLE ep2_15,120,60 ; Pixel.
ENDBLOCK
%endmacro
 
; ---------------------------------------------------------------------------
%macro EPISODE3 1
BLOCK %1+0*SPEED,%1+9*SPEED
PUTSPRITE_X8 bar,20,180-5*8 ; boy lazy body
PUTSPRITE_X8 boy_head_drunk,20+5*8,180-9*8 ; boy lazy head
RECTANGLE 20+6*8,180-6*8+2,8,8,0 ; eye
;PUTSPRITE_X8 black_pixel,20+6*8,180-6*8+2
ENDBLOCK
BLOCK %1+9*SPEED,%1+12*SPEED
PUTSPRITE_X8 boy_head_right,20+3*8,180-11*8 ; Boy head
PUTSPRITE_X8 bar,20,180-5*8 ; boy cool
ENDBLOCK
BLOCK %1+12*SPEED,%1+16*SPEED
MOVESPRITE_X8 60,0,boy_head_right,60,60 ; Boy head
MOVESPRITE_X8 60,0,boy_body,60,60+6*8 ; Boy body
ENDBLOCK

BLOCK %1+0*SPEED,%1+16*SPEED
PUTSPRITE empty_glass,140,180-23 ; glass
PUTSPRITE glass_content,140,180-32 ; content of glass
PUTSPRITE empty_glass,180,180-23 ; empty glass
PUTSPRITE empty_glass,193,180-23 ; empty glass
PUTSPRITE empty_glass,222,180-23 ; empty glass
RECTANGLE 180+8, 180-16, 4, 1, 84 ; fond du verre
RECTANGLE 222+7, 180-17, 6, 1, 84 ; fond du verre 
RECTANGLE 222+8, 180-16, 4, 1, 84 ; fond du verre 
ENDBLOCK

BLOCK %1+14*SPEED,%1+16*SPEED
RECTANGLE 0,20,92,180,200 ; left guard band
ENDBLOCK

BLOCK %1+0*SPEED,%1+2*SPEED
PRINT ep3_01,2*8,50 ; a few more drinks...
ENDBLOCK

BLOCK %1+3*SPEED,%1+5*SPEED
PRINT ep3_02,3*8,50 ; pixel looked...
ENDBLOCK

BLOCK %1+6*SPEED,%1+8*SPEED
WHITE_LEFT_THINK ep3_03,120,60; ,16*8 ; ask her
ENDBLOCK

BLOCK %1+9*SPEED,%1+11*SPEED
WHITE_LEFT_THINK ep3_04,120,50 ;,13*8 ; ok be cool
ENDBLOCK

BLOCK %1+16*SPEED,%1+21*SPEED
PUTSPRITE pixel,200,70 ; pixel
ENDBLOCK
BLOCK %1+16*SPEED,%1+20*SPEED
MOVESPRITE_X4 30,0,boy_head_right,-15,60 ; Boy head
MOVESPRITE_X4 30,0,boy_body,-15,60+6*4 ; Boy body
RECTANGLE 280,20,320-280-1,180,200 ; right guard band
ENDBLOCK
BLOCK %1+20*SPEED,%1+21*SPEED
PUTSPRITE_X4 boy_head_right,120,60 ; Boy head
PUTSPRITE_X4 boy_body,120,60+6*4 ; Boy body
ENDBLOCK

BLOCK %1+21*SPEED,%1+25*SPEED
PUTSPRITE_X2 pixel,280,80 ; pixel
PUTSPRITE_X8 boy_head_right,120,60 ; Boy head
PUTSPRITE_X8 boy_body,120,60+6*8 ; Boy body
ENDBLOCK

BLOCK %1+21*SPEED,%1+22*SPEED
WHITE_RIGHT_BUBBLE ep3_05,24,40 ; would you
ENDBLOCK

BLOCK %1+23*SPEED,%1+25*SPEED
WHITE_RIGHT_BUBBLE empty_14, 16,40+4 ;14*8
PRINT ep3_06,16,40 ; like to go out
PRINT ep3_07,16,40+8 ; sometime
ENDBLOCK

BLOCK %1+25*SPEED,%1+26*SPEED
MOVESPRITE_X2 -98,0,pixel,280,80 ; pixel
MOVESPRITE_X8 -98,0,boy_head_right,120,60 ; Boy head
MOVESPRITE_X8 -98,0,boy_body,120,60+6*8 ; Boy body
ENDBLOCK
BLOCK %1+26*SPEED,%1+28*SPEED
PUTSPRITE_X2 pixel,280-110,80 ; pixel
PUTSPRITE_X8 boy_head_right,120-110,60 ; Boy head
PUTSPRITE_X8 boy_body,120-110,60+6*8 ; Boy body
ENDBLOCK 

BLOCK %1+26*SPEED,%1+28*SPEED
WHITE_LEFT_BUBBLE ep3_08,180,40 ; i love
ENDBLOCK

BLOCK %1+28*SPEED,%1+29*SPEED
MOVESPRITE_X2 98,0,pixel,280-110,80 ; pixel
MOVESPRITE_X8 98,0,boy_head_right,120-110,60 ; Boy head
MOVESPRITE_X8 98,0,boy_body,120-110,60+6*8 ; Boy body
ENDBLOCK
BLOCK %1+29*SPEED,%1+32*SPEED
PUTSPRITE_X2 pixel,280,80 ; pixel
PUTSPRITE_X8 boy_head_right,120,60 ; Boy head
PUTSPRITE_X8 boy_body,120,60+6*8 ; Boy body
WHITE_RIGHT_BUBBLE ep3_09,24,40 ; splendid
ENDBLOCK
%endmacro

%macro BATHROOM 1
BLOCK %1+0*SPEED,%1+14*SPEED
RECTANGLE 0,20,320,160,15 ; white background
ENDBLOCK

BLOCK %1+0*SPEED,%1+6*SPEED ; grid
RECTANGLE 0,36,320,1,29
RECTANGLE 0,36+32,320,1,29
RECTANGLE 0,36+64,320,1,29
RECTANGLE 0,36+96,320,1,29
RECTANGLE 0,36+128,320,1,29
RECTANGLE 32,20,1,160,29
RECTANGLE 64,20,1,160,29
RECTANGLE 96,20,1,160,29
RECTANGLE 128,20,1,160,29
RECTANGLE 160,20,1,160,29
RECTANGLE 192,20,1,160,29
RECTANGLE 224,20,1,160,29
RECTANGLE 256,20,1,160,29
RECTANGLE 288,20,1,160,29
ENDBLOCK

BLOCK %1+0*SPEED,%1+3*SPEED ; bath
PUTSPRITE_X8 boy_head_left,320-5*8-2,130-7*8 ; Boy head
RECTANGLE 320-4*8-2,130-8,4*8,8,89 ; neck
RECTANGLE 0,130,320,16,27
RECTANGLE 0,130+8,320,1,23
RECTANGLE 0,130+8+1,320,41,29
ENDBLOCK

BLOCK %1+3*SPEED,%1+6*SPEED ; mirror
RECTANGLE 160,71,108,90,23 ; border
RECTANGLE 161,72,106,88,15 ; content
PUTSPRITE_X8 boy_head_reflect,180,80 ; Boy head reflection
PUTSPRITE_X8 boy_head_look_mirror,160-3*8,80+2 ; Boy head look mirror
RECTANGLE 160-4*8,80+7*8+2,7*8,180-(80+7*8+2),89 ; BODY
ENDBLOCK

BLOCK %1+6*SPEED,%1+9*SPEED
PUTSPRITE_X4 boy_body_nude,160-18,70 ; Boy body
PUTSPRITE_X4 boy_head_right,160-18,70-6*4 ; Boy head
PUTSPRITE_X2 pixel, 160-18+6, 70+14
PUTSPRITE_X2 pixel, 160-18+6+14, 70+14
ENDBLOCK

BLOCK %1+7*SPEED,%1+9*SPEED
PUTSPRITE_X4 pantalon,160-18+4,70+40 ; pantalon
ENDBLOCK

BLOCK %1+8*SPEED,%1+9*SPEED
RECTANGLE 160-18,70+20*4,4*3,4,0 ; left shoe
RECTANGLE 160-18+4*4,70+20*4,4*3,4,0 ; right shoe
ENDBLOCK

BLOCK %1+9*SPEED,%1+14*SPEED
PUTSPRITE_X4 boy_head_right,160-18,70-6*4 ; Boy head
PUTSPRITE_X4 boy_body,160-18,70 ; Boy body
ENDBLOCK

BLOCK %1+10*SPEED,%1+14*SPEED
PUTSPRITE_X2 boy_arm_yeah,160-18+6*4,70+5*4 ; Boy arm
BLACK_RIGHT_BUBBLE bathroom_01,70,32 ; Fresh!
ENDBLOCK
%endmacro

%macro EPISODE4 1
BLOCK %1+0*SPEED,%1+5*SPEED
RECTANGLE 0,172,320,8,179 ; ground
RECTANGLE 160-55,172-63,110,63,126 ; ritz contour
RECTANGLE 160-54,172-62,108,62,179 ; ritz color
RECTANGLE 160-55+7,172-20,110-14,20,14 ; yellow
RECTANGLE 160-55+7,172-20-3,110-14,3,43 ; orange
RECTANGLE 160-55+4,172-20-3-12,110-8,12,92 ; light yellow
PRINT the_ritz,160-4*8,172-57
PUTSPRITE ritz_title,160-34,172-31 ; the breakfast club
ENDBLOCK

BLOCK %1+0*SPEED,%1+2*SPEED
MOVESPRITE 80,0,taxi,-35,172-15 ; taxi
RECTANGLE 280,172-16,320-280-1,16,200 ; right mask
ENDBLOCK
BLOCK %1+2*SPEED,%1+5*SPEED
PUTSPRITE subpixel_boy,160-1,172-10 ; sub pixel boy
ENDBLOCK
BLOCK %1+2*SPEED,%1+3*SPEED
PUTSPRITE taxi,160-17,172-15 ; taxi
ENDBLOCK
BLOCK %1+3*SPEED,%1+5*SPEED
MOVESPRITE 80,0,taxi,160-17,172-15 ; taxi
RECTANGLE 0,172-16,40,16,200 ; left mask
ENDBLOCK

BLOCK %1+5*SPEED,%1+27*SPEED
RECTANGLE 0,20,320,180,179 ; ritz color
RECTANGLE 0,148-20*4,320,20*4,14 ; yellow
RECTANGLE 0,148-20*4-12,320,3*4,43 ; orange
RECTANGLE 0,148-20*4-12-48,320,12*4,92 ; light yellow
PUTSPRITE_X4 ritz_title,160-34*4,148-31*4 ; the breakfast club

PUTSPRITE_X2 pixel,160-24,120+8 ; pixel
PUTSPRITE_X2 boy_head_left,160-4,120 ; Boy head
PUTSPRITE_X2 boy_body,160-4,120+6*2 ; Boy body
ENDBLOCK

BLOCK %1+6*SPEED,%1+8*SPEED
BLACK_LEFT_BUBBLE ep4_01,170,80 ; Hi pixel
ENDBLOCK

BLOCK %1+9*SPEED,%1+11*SPEED
BLACK_RIGHT_BUBBLE ep4_02,70,90 ; Hi boy
ENDBLOCK

BLOCK %1+11*SPEED,%1+16*SPEED
RECTANGLE 0,20,320,180,0 ; fill black
ENDBLOCK

BLOCK %1+12*SPEED,%1+15*SPEED
RECTANGLE 60,60,200,80,15 ; cinema screen
PRINT cinema_title,164-10*8,96 ; cinema message
ENDBLOCK

BLOCK %1+16*SPEED,%1+18*SPEED
BLACK_RIGHT_BUBBLE empty_15,12,90+4
PRINT ep4_03,12,90 ; the film 
PRINT ep4_04,12,90+8 ; was great
ENDBLOCK

BLOCK %1+19*SPEED,%1+21*SPEED
BLACK_LEFT_BUBBLE empty_13,170,80+4
PRINT ep4_05,170,80 ; yes
PRINT ep4_06,170,80+8 ; judd too
ENDBLOCK

BLOCK %1+24*SPEED,%1+27*SPEED
BLACK_LEFT_BUBBLE empty_18,164,80+4
PRINT ep4_07,164,80 ; wanna
PRINT ep4_08,164,80+8 ; a bite to eat
ENDBLOCK

BLOCK %1+27*SPEED,%1+40*SPEED
RECTANGLE 0,20,320,180,0 ; fill black
ENDBLOCK

BLOCK %1+29*SPEED,%1+32*SPEED
PRINT ep4_09,160-15*8-4,96 ; does
ENDBLOCK

BLOCK %1+33*SPEED,%1+37*SPEED
PRINT ep4_10,160-14*8-4,96 ; find out
ENDBLOCK
%endmacro

; ---------------------------------------------------------------------------
%macro DEMO 0
;RECTANGLE 0,256*SPEED,0,320,200,0 ; clear screen during all the demo

BLOCK 0,(3+20+3+31)*SPEED
RECTANGLE 0,20,320,160,15 ; white background
ENDBLOCK
TITLE_PART 3*SPEED
EPISODE1 (3+20+3)*SPEED

BLOCK (3+20+3+31)*SPEED,(3+20+3+31+3+50+3+32+3+14+3+100)*SPEED
RECTANGLE 0,20,320,160,200 ; dark blue background
ENDBLOCK
EPISODE2 (3+20+3+31+3)*SPEED
EPISODE3 (3+20+3+31+3+50+3)*SPEED

BLOCK (3+20+3+31+3+50+3+32+2)*SPEED,(3+20+3+31+3+50+3+32+2+2)*SPEED
PRINT date_title, 160-12*8, 96
ENDBLOCK

BATHROOM (3+20+3+31+3+50+3+32+2+2+2)*SPEED
EPISODE4 (3+20+3+31+3+50+3+32+2+2+2+14+2)*SPEED

BLOCK (3+20+3+31+3+50+3+32+2+2+2+14+2+40)*SPEED, 256*SPEED
EXIT
ENDBLOCK

BLOCK 0, 256*SPEED
RECTANGLE 0,0,320,20,0 ; up black band
RECTANGLE 0,180,320,20,0 ; down black band
;frame:
RECTANGLE 0,18,319,1,100
RECTANGLE 0,180,319,1,100
RECTANGLE 0,18,1,163,100
RECTANGLE 318,18,1,163,100
RECTANGLE 1,19,317,1,3
RECTANGLE 0,181,320,1,3
RECTANGLE 1,19,1,161,3
RECTANGLE 319,18,1,164,3
ENDBLOCK
%endmacro

;=============================================================================
main:
	mov ax,013h 
	int 10h 

	call printinit

	push word 40h
	pop fs
	push word 0A000h
	pop gs
	push word 09000h
	pop es

	mov bx,[fs:6ch]; initial time value
	neg bx
	
process_script:
	call wait_vbl
	call blit_back_buffer
	mov si,script; instruction pointer
	
process_block:
	push bx
	add bx,[fs:6ch]; current time
	
	add si,4; si point to the first instruction	
	cmp bx,[si-4]; begin
	jl skip_instructions 
	cmp bx,[si-2]; end
	jge skip_instructions
	sub bx,[si-4]; compute relative time
	
process_instructions:
	movzx bp,[si]; instruction index
	inc si; si point to the parameters list
	cmp bp,end_block
	je continue
	mov ax,[instructions + bp]; instruction adress
	call ax; launch the effect
	add si,[instructions_parameters + bp]; skip instruction size
	jmp process_instructions

skip_instructions:
	movzx bx,[si]; instruction index
	inc si; skip opcode size
	add si,[instructions_parameters + bx]; skip instruction size
	cmp bx,end_block
	jne skip_instructions
	
continue:
	pop bx; initial time value
	cmp si,script_end
	jne process_block
		
	in al,60h; read a scan code
	cbw
	dec ax
	jnz process_script; exit on escape

func_exit:
	mov al,03h
	int 10h
	int 21h 

;=============================================================================
; modify dx, al
wait_vbl:
	mov dx,3DAh
l1:
	in al,dx
	test al,08h			
	jne l1
l2:												
	in al,dx
	test al,08h
	je l2
	ret

;=============================================================================
; blit the back buffer to the screen
; modify cx,di,si
blit_back_buffer:
	push ds
	push es
	pop ds
	push gs
	pop es

	mov cx,16000   
	xor di,di
	xor si,si 
	rep movsd

	push es
	pop gs
	push ds
	pop es
	pop ds
	ret

;=============================================================================
printinit:
	;push es
	push ds
	mov ax,1130h
	mov bh,3; va chercher la table des caracteres
	int 10h; retouner dans es:bp

	push cs; recopie dans char_table (cs)
	push es; la table des caracteres
	pop ds
	pop es
	mov si,bp
	mov di,char_table
	mov cx,256*4; 256*8
	rep movsd; movsb
	pop ds
	;pop es
	ret

; ---------------------------------------------------------------------------
printstr:
	pusha
	mov si,cx
	mov bx,di
	dec bx
putchar:		
	xor ax,ax
	lodsb; Charger la fonte VGA 8x8 ou bien en stocker une (480 bytes)
	cmp al,'$'
	jz ps_end 

	push bx
	lea di,[char_table+eax*8]; Boris =:| 8 octet l'instruction il y peut etre mieux
	mov ah,[char_col]; couleur du pixel
	mov cx,8; Ici, le nombre de lignes a clasher
pc_ld0:
	mov al,[di]
	push bx
	or al,al
pc_ld:
	jz pc_nxt
	inc bx; Deplacement du point
	shl al,1
	jnc pc_ld	
	mov [es:bx],ah; Affichage du point
	jmp pc_ld
pc_nxt:
	pop bx
	add bx,320
	inc di
	loop pc_ld0
	pop bx   
	add bx,8; letter spacing
	jmp putchar
ps_end:		 
	popa
	ret

;=============================================================================
func_print_color:
	pusha
	mov dx,[si+4]
	jmp begin_print	
func_print:
	pusha
	mov dx,15	
begin_print:
	mov cx,[si] ; string
	mov di,[si+2] ; offset
	
	mov [char_col], dh
	dec di
	call printstr
	add di,320
	call printstr
	inc di
	call printstr
	inc di
	call printstr
	sub di,320
	call printstr
	sub di,320
	call printstr
	dec di
	call printstr
	dec di
	call printstr
	add di,321
	mov [char_col], dl
	call printstr
	
	popa
	ret

; si:[word picture, word offset]
func_putsprite:
	mov byte[zoom_factor], 1
	jmp begin_putsprite
func_putsprite_x2:
	mov byte[zoom_factor], 2
	jmp begin_putsprite
func_putsprite_x4:
	mov byte[zoom_factor], 4
	jmp begin_putsprite
func_putsprite_x8:
	mov byte[zoom_factor], 8
begin_putsprite:
	pusha

	mov bp,[si]; adress of picture
	inc bp
	mov ch,[bp]; picture height
	inc bp; bitmap

	mov di,[si+2]; position offset
	
ps_loop_y:
	mov bx,[si]; adress of picture
	mov cl,[bx]; picture width	
	push di
ps_loop_x:
	movzx ax,byte [bp]; fetch bitmap color
	or ax,ax
	jz ps_skip; skip transparent pixels
	cmp di,180*320; 0
	jb ps_continue; bot clipping	
	pop di
	popa
	ret
	
ps_continue:
	pusha
	movzx dx,[zoom_factor]
	cmp dx,1
	je zoom_1
	cmp dx,2
	je zoom_2
	cmp dx,4
	je zoom_4
zoom_8:
	jmp putpixel8
zoom_4:
	jmp putpixel4
zoom_2:
	mov [es:di+1],al ; put pixel
	mov [es:di+320],al ; put pixel
	mov [es:di+321],al ; put pixel	
zoom_1:
	mov [es:di],al ; put pixel
return:
	popa
ps_skip:
	inc bp; next pixel of bitmap
	movzx ax,[zoom_factor]
	add di,ax; next pixel of screen
	dec cl
	jnz ps_loop_x
	mov dx,320
	imul dx
	pop di
	add di,ax; next line of screen
	dec ch
	jnz ps_loop_y
	
	popa
	ret
	
putpixel4:
	mov dx,3
loop4:
	mov cx,4
	rep stosb
	add di,316
	dec dx
	jns loop4
	jmp return
	
putpixel8:
	mov dx,7
loop8:
	mov cx,8
	rep stosb
	add di,312
	dec dx
	jns loop8
	jmp return
	
; draw a filled rectangle of given color
; si:[word offset, word width, byte height, byte color]
func_rectangle:
	pusha
	
	mov di,[si]; set begin position
	movzx cx,[si+4]; y counter
	mov al,[si+5]; color
	
loop_y:	
	mov bx,[si+2]; x counter
loop_x:
	dec bx
	mov byte[es:di+bx],al
	jnz loop_x
	
	add di,320
	loop loop_y
		
	popa
	ret
	
; si:[byte dirx, byte diry, word picture, word offset]
func_movesprite:
	mov byte[zoom_factor], 1
	jmp begin_movesprite
func_movesprite_x2:
	mov byte[zoom_factor], 2
	jmp begin_movesprite
func_movesprite_x4:
	mov byte[zoom_factor], 4
	jmp begin_movesprite
func_movesprite_x8:
	mov byte[zoom_factor], 8
begin_movesprite:
	pusha

	; save original instruction parameters
	push word [si+4]

	; modify the begin position in function of the relative time
	mov al,[si]; get movement vector component x
	cbw ; expand with 0 or 1 if al is signed or not
	imul bx; relative time in ticks
	sar ax,4; fixed point math
	;add [si+2+1+4],ax; modify posx
	add [si+4],ax; modify offset
	mov al,[si+1]; get movement vector component y
	cbw ; expand with 0 or 1 if al is signed or not
	imul bx; relative time in ticks
	sar ax,4; fixed point math
	;add [si+2+1+3],ax; modify posy
	mov dx,320
	imul dx
	add [si+4],ax; modify offset
		
	; call as if this was a putsprite (hack)
	add si, 2
	call begin_putsprite
	sub si, 2
	
	; restore original offset
	pop word [si+4]
		
	popa
	ret
	
;=============================================================================
;PUTSPRITE black_single_bubble_left,%1-5-3,%2-8
;PUTSPRITE black_single_bubble_right,%1+4+%3,%2-8
;RECTANGLE %1-5, %2-8, %3+9,24,0
;RECTANGLE %1-5, %2-8+1, %3+9,22,15

; [word string, word offset]	
func_black_bubble:
	pusha
	push word black_single_bubble_right
	push word black_single_bubble_left
	mov dx,15
	jmp begin_bubble
func_white_bubble:
	pusha
	push word white_single_bubble_right
	push word white_single_bubble_left
	mov dx,15*256+200
begin_bubble:		
	mov cx,[si+2] ; offset
	sub cx,8+320*8

	mov bp,[si]; string base pointer
	xor bx,bx; string length computation
l3:	mov al,[ebp+ebx]
	inc bx
	cmp al,'$'
	jne l3
	dec bx
	shl bx,3 ; string length
	
	mov si,pool
	pop word[si]
	mov [si+2],cx
	call func_putsprite
	
	pop word[si]
	add cx,8+4
	add cx,bx
	mov [si+2],cx	
	call func_putsprite

	sub cx,bx
	sub cx,4+5
	mov [si],cx ; offset
	add bx,9
	mov [si+2],bx ; width
	mov byte [si+4],24	; height of the bubble	
	mov byte [si+5],dh
	call func_rectangle	
	add word [si],320
	sub byte [si+4],2	
	mov byte [si+5],dl
	call func_rectangle	
	
	popa
	call func_print
	ret

;PUTSPRITE black_speak_right,%1-8+%3,%2-8+23
; [word string, word offset]
func_black_speak_right:
	call func_black_bubble
	pusha
	push word black_speak_right
	jmp begin_speak_right
func_white_speak_right:
	call func_white_bubble
	pusha
	push word white_speak_right
begin_speak_right:
	mov cx,[si+2] ; offset
	add cx,320*15 -16

	mov bp,[si]; string base pointer
	xor bx,bx; string length computation
l4:	mov al,[ebp+ebx]
	inc bx
	cmp al,'$'
	jne l4
	dec bx
	shl bx,3 ; string length
	add cx,bx
	
	mov si,pool
	pop word [si]
	mov [si+2],cx
	call func_putsprite
	
	popa
	ret

;PUTSPRITE black_speak_left,%1,%2-8+23	
func_black_speak_left:
	call func_black_bubble
	pusha
	push word black_speak_left
	jmp begin_speak_left
func_white_speak_left:
	call func_white_bubble
	pusha
	push word white_speak_left
	jmp begin_speak_left
func_white_think_left:
	call func_white_bubble
	pusha
	push word white_think_left
begin_speak_left:
	mov cx,[si+2]; offset
	add cx,320*15
	
	mov si,pool
	pop word [si]
	mov [si+2],cx
	call func_putsprite
	
	popa
	ret

%ifdef true
func_setcolor:
	mov dx, 3c8h
	mov al, [si]; color index
	out dx, al
	inc dx
	mov al, [si+1]; r
	out dx, al
	mov al, [si+2]; g
	out dx, al
	mov al, [si+3]; b
	out dx, al
	ret
%endif

;=============================================================================
section .data align=1

pixel: db 1, 1, 40

subpixel_boy:
db 2, 10
incbin "data/subpixel_boy.tga", 18+768, 2*10

bar:
db 13, 5
incbin "data/bar.tga", 18+768, 13*5

boy_head_drunk:
db 4, 6
incbin "data/boy_head_drunk.tga", 18+768, 4*6

box_top_left:
db 27, 19
incbin "data/box_top_left.tga", 18+768, 27*19

box_top_right:
db 27, 19
incbin "data/box_top_right.tga", 18+768, 27*19

boy_body:
db 7, 21
incbin "data/boy_body.tga", 18+768, 7*21

boy_head_left:
db 7, 6
incbin "data/boy_head_left.tga", 18+768, 7*6

boy_head_right:
db 7, 6
incbin "data/boy_head_right.tga", 18+768, 7*6

cendar:
db 13, 3
incbin "data/cendar.tga", 18+768, 13*3

cigarette:
db 6, 1
incbin "data/cigarette.tga", 18+768, 6*1

empty_glass:
db 20, 23
incbin "data/empty_glass.tga", 18+768, 20*23

glass_content:
db 20, 17
incbin "data/glass_content.tga", 18+768, 20*17

hearth:
db 17, 17
incbin "data/hearth.tga", 18+768, 17*17

ritz_title:
db 67, 5
incbin "data/ritz_title.tga", 18+768, 67*5

small_sunglasses:
db 15, 5
incbin "data/small_sunglasses.tga", 18+768, 15*5

sunglasses:
db 30, 11
incbin "data/sunglasses.tga", 18+768, 30*11

table:
db 20, 10
incbin "data/table.tga", 18+768, 20*10

boy_body_nude:
db 7, 21
incbin "data/boy_body_nude.tga", 18+768, 7*21

pantalon:
db 5, 10
incbin "data/pantalon.tga", 18+768, 5*10

boy_head_look_mirror:
db 5, 7
incbin "data/boy_head_look_mirror.tga", 18+768, 5*7

boy_head_reflect:
db 7, 10
incbin "data/boy_head_reflect.tga", 18+768, 7*10

boy_arm_yeah:
db 10, 14
incbin "data/boy_arm_yeah.tga", 18+768, 10*14

taxi:
db 35, 15
incbin "data/taxi.tga", 18+768, 35*15

; ---------------------------------------------------------------------------
black_single_bubble_right:
db 3, 24
incbin "data/black_single_bubble_right.tga", 18+768, 3*24

black_single_bubble_left:
db 3, 24
incbin "data/black_single_bubble_left.tga", 18+768, 3*24

black_speak_right:
db 21, 16
incbin "data/black_speak_right.tga", 18+768, 21*16

black_speak_left:
db 21, 16
incbin "data/black_speak_left.tga", 18+768, 21*16

; ---------------------------------------------------------------------------
white_single_bubble_right:
db 3, 24
incbin "data/white_single_bubble_right.tga", 18+768, 3*24

white_single_bubble_left:
db 3, 24
incbin "data/white_single_bubble_left.tga", 18+768, 3*24

white_speak_right:
db 21, 16
incbin "data/white_speak_right.tga", 18+768, 21*16

white_speak_left:
db 21, 16
incbin "data/white_speak_left.tga", 18+768, 21*16

white_think_left:
db 30, 32
incbin "data/white_think_left.tga", 18+768, 30*32

;=============================================================================
title_01: db 'Colas of Aspirine$'
title_02: db 'and$'
title_03: db 'Flip Flop Flying',39,'Boy$'
title_04: db 'presents$'
title_05: db 'the story of a boy$'
title_06: db 'the story of a pixel$'
title_07: db 'Boy Meets Pixel$'

ep1_01: db 'Hello$'
ep1_02: db 'My name is$'
ep1_03: db 'this is my story$'
ep1_04: db 'I',39,'ve been in love before...$'
ep1_05: db '...with a box...$'
ep1_06: db '...with a pharmacy sign...$'
ep1_07: db '...with a pair of sunglasses...$'
ep1_08: db 'But nothing like the love$'
ep1_09: db 'I came to feel for Pixel$'

ep2_wired01: db 'W I R E D$'
ep2_wired02: db 'niteclub$'
;ep2_wired01: db 'Û	 Û  ß  ÛßßÜ Ûßßß  ÛßßßÜ ß$'
;ep2_wired02: db 'Û ÜßÜ Û  Û  Û	Ûßß   Û   Û$'
;ep2_wired03: db ' ß   ß   ß  ß	ßßßß  ßßßß$'
;ep2_wired04: db 'niteclub$'

ep2_01: db 'I first met Pixel here$'
ep2_02: db 'She was working as$'
ep2_03: db 'a cocktail waitress$'
ep2_04: db 'I heard her sweet sweet voice...$'
ep2_05: db 'what can i get you?$'
ep2_06: db 'I saw before me a vision of beauty...$'
ep2_07: db 'An angel sent from Heaven$'
ep2_08: db 'A really small angel$'
ep2_09: db 'A Pina Colada, please$'
ep2_10: db '(3 minutes later)$'
ep2_11: db 'Thank you$'
ep2_12: db 'I tipped her, and asked her name...$'
ep2_13: db 'She paused before answering...$'
ep2_14: db 'My name is...$'
ep2_15: db 'Pixel$'

ep3_01: db 'a few more drinks and I was drunk...$'
ep3_02: db 'pixel looked more and more lovely$'
ep3_03: db 'ask her out, boy$'
ep3_04: db 'okay. be cool$'
ep3_05: db 'Would you...$'
ep3_06: db 'like to go out$'
ep3_07: db 'sometime?$'
ep3_08: db 'I',39,'d love to!$'
ep3_09: db 'splendid!$'

bathroom_01: db 'FRESH!$'

date_title: db 'the big date day came...$'

ep4_01: db 'Hi Pixel$'
ep4_02: db 'Hi Boy$'
ep4_03: db 'That was ace$'
ep4_04: db 'Molly was great$'
ep4_05: db 'Yeh, and Judd$'
ep4_06: db 'was cool too.$'
ep4_07: db 'Say, do you wanna$'
ep4_08: db 'get a bite to eat?$'
ep4_09: db 'Does Pixel want a bite to eat?$'
ep4_10: db 'Find out in the next episode$'

the_ritz: db 'THE RITZ$'
cinema_title: db '(128 minutes later)$'

empty_13: db '             $'
empty_14: db '              $'
empty_15: db '               $'
empty_18: db '                  $'
empty_19: db '                   $'
empty_20: db '                    $'
empty_25: db '                         $'

padding: db '2004'

;=============================================================================

instructions: 
	dw 0
	dw func_print
	;dw func_black_bubble, func_white_bubble
	dw func_black_speak_right, func_white_speak_right, func_black_speak_left, func_white_speak_left
	dw func_white_think_left
	dw func_putsprite, func_putsprite_x2, func_putsprite_x4, func_putsprite_x8
	dw func_rectangle 
	dw func_print_color
	dw func_movesprite, func_movesprite_x2, func_movesprite_x4, func_movesprite_x8
	dw func_exit

instructions_parameters:
	dw 0
	dw 4
	;dw 4, 4
	dw 4, 4, 4, 4
	dw 4
	dw 4, 4, 4, 4
	dw 6
	dw 6
	dw 6, 6, 6, 6
	dw 0

script:
DEMO
script_end:

section .bss
char_table:  resb 2048
char_col:    resb 1
zoom_factor: resb 1
pool:        resb 8
