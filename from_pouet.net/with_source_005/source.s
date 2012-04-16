

; Welcome to our daily coding tutorial.
; I'm your friendly host, Benjamin Dilworth-Smith.
; I also like it when the red water comes out.

; A serious problem that occured recently is that
; according to several experts, scene is apparently dead.
; Now we all know the reason for that:
;
; Black backgrounds.
;
; This is especially notable in a recent production
; released by anarchist demogroup Traction,
; deliberately labeled as "I killed the scene".
;
; The tongue-in-cheek existence of such a tiny
; production screams for vengeance. Deep and hard.
;
; Coders of the world must create the ultimate 
; opposite of such a devilish scheme!
;
; ... WHITE BACKGROUNDS! _AND SMALLER!_
;
;
; So let's start our way to redemption, TO SAVE THE SCENE!


; First we need to assume a few things.
; Let's assume that our registers are all set to zero,
; when we start.
; Now this MAY OR MAY NOT BE TRUE, but
; _THE END JUSTIFIES THE MEANS!!!_
; So we just don't care. People who don't reset their
; registers suck anyway and deserve to perish.

; Now, we need to get white stuff all over the screen.
; No, without porn.
;
; A nice way of doing this is filling the
; screen with white!
; GOLLY GOSH, INGENIOUS!
;
; Since stated above, we can afford anything due to
; our sacred cause, we DONT SWITCH VIDEO MODE!
; NOONE CARES.
;
; There is a lovely interrupt call to write out
; characters in a neat and orderly single file line,
; that being int 10h with ah set as 9.
;
; So first, let's carefully set ah to 9!
mov ah,9

; WHOA!
; That was HARSH!
;
; Now, in bl we must put the attributes.
; This is a tricky one.
; We want the screen to be completely WHITE.
; YES, totally 0xFFFFFF!!!
;
; However, we would need to fill the character
; attribute with 0xDB (¦), and that would cost
; us BYTES! YES! WE CANNOT AFFORD TO LOSE BYTES!
;
; So, to carry on with our godly plan,
; WE DONT DRAW CHARACTERS!
; We set the BACKGROUND WHITE!!!!!
; Noone will ever know!
;
; So we need to set the upper nibble to FULL ON
; WHITE MANIA!
mov bl,0xF0

; HOLY KETCHUP! ITS WORKING!
;
; Now, we also need to draw a LOT of that.
; CX is the iteration register in this case.
; However, WE STILL NEED BYTES!
; OH GOD WILL THIS EVER STOP!
;
; We must use black magic here!
; Let's force CH to decrement!
; YES!
; Let's subtract 1 from 0!
; LET IT OVERFLOW, AS IT IS A WORTHY SACRIFICE!
; (And we never liked Switzerland anyway.)
dec ch

; AND IT WAS DONE!
;
; And now, we're ready to perform the last part
; of our ritual:
int 10h

; Rejoice, ye olde shoppe-clients, rejoice!
; It happeneth and it was good!
;
; BUT WAIT!
; ALL IS NOT DONE!
; We must KEEP OUR PROMISED BRIGHTNESS WHERE IT BELONGS!
; For a while at least.
;
; Let's put the decision to the audience's hands.
; Will they purge in eternal peril for aborting
; the holy light or will they truthfully stand
; thru all the danger and temptation and KEEP
; THE SCENE ALIVE???
;
; Let's do it, let's WAIT FOR A KEYPRESS!
xor ah,ah
int 16h

; OUR MISSION IS COMPLETE!
; 12 bytes of godlike glory shining in it's holy color!
; People!
; Save the scene!
; DON'T LET THE EVIL -17.0 GAMMA DERAIL YOU!
;
; THE POWER IS YOURS!