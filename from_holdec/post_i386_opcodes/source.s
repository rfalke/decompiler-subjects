
        .file   "a.c"
        .text

    
.globl bswap
         .type   bswap, @function
bswap:
      


  bswap %eax


    ret
         .size   bswap, .-bswap

    
.globl bswap_constant
         .type   bswap_constant, @function
bswap_constant:
      


  bswap %eax


    ret
         .size   bswap_constant, .-bswap_constant

    
.globl bswap_allregs
         .type   bswap_allregs, @function
bswap_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  bswap %eax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   bswap_allregs, .-bswap_allregs

    
.globl cmpxchg1
         .type   cmpxchg1, @function
cmpxchg1:
      


  cmpxchg %al,%bl


    ret
         .size   cmpxchg1, .-cmpxchg1

    
.globl cmpxchg1_constant
         .type   cmpxchg1_constant, @function
cmpxchg1_constant:
      


  cmpxchg %al,%bl


    ret
         .size   cmpxchg1_constant, .-cmpxchg1_constant

    
.globl cmpxchg1_allregs
         .type   cmpxchg1_allregs, @function
cmpxchg1_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  cmpxchg %al,%bl
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmpxchg1_allregs, .-cmpxchg1_allregs

    
.globl cmpxchg2
         .type   cmpxchg2, @function
cmpxchg2:
      


  cmpxchg %ax,%bx


    ret
         .size   cmpxchg2, .-cmpxchg2

    
.globl cmpxchg2_constant
         .type   cmpxchg2_constant, @function
cmpxchg2_constant:
      


  cmpxchg %ax,%bx


    ret
         .size   cmpxchg2_constant, .-cmpxchg2_constant

    
.globl cmpxchg2_allregs
         .type   cmpxchg2_allregs, @function
cmpxchg2_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  cmpxchg %ax,%bx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmpxchg2_allregs, .-cmpxchg2_allregs

    
.globl cmpxchg3
         .type   cmpxchg3, @function
cmpxchg3:
      


  cmpxchg %eax,%ebx


    ret
         .size   cmpxchg3, .-cmpxchg3

    
.globl cmpxchg3_constant
         .type   cmpxchg3_constant, @function
cmpxchg3_constant:
      


  cmpxchg %eax,%ebx


    ret
         .size   cmpxchg3_constant, .-cmpxchg3_constant

    
.globl cmpxchg3_allregs
         .type   cmpxchg3_allregs, @function
cmpxchg3_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  cmpxchg %eax,%ebx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmpxchg3_allregs, .-cmpxchg3_allregs

    
.globl cmpxchg4
         .type   cmpxchg4, @function
cmpxchg4:
      


  cmpxchg %eax,(%ebx)


    ret
         .size   cmpxchg4, .-cmpxchg4

    
.globl cmpxchg4_constant
         .type   cmpxchg4_constant, @function
cmpxchg4_constant:
      


  cmpxchg %eax,(%ebx)


    ret
         .size   cmpxchg4_constant, .-cmpxchg4_constant

    
.globl cmpxchg4_allregs
         .type   cmpxchg4_allregs, @function
cmpxchg4_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  cmpxchg %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmpxchg4_allregs, .-cmpxchg4_allregs

    
.globl cmpxchg5
         .type   cmpxchg5, @function
cmpxchg5:
      


  cmpxchg %al,%al


    ret
         .size   cmpxchg5, .-cmpxchg5

    
.globl cmpxchg5_constant
         .type   cmpxchg5_constant, @function
cmpxchg5_constant:
      


  cmpxchg %al,%al


    ret
         .size   cmpxchg5_constant, .-cmpxchg5_constant

    
.globl cmpxchg5_allregs
         .type   cmpxchg5_allregs, @function
cmpxchg5_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  cmpxchg %al,%al
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmpxchg5_allregs, .-cmpxchg5_allregs

    
.globl cmpxchg1_locked
         .type   cmpxchg1_locked, @function
cmpxchg1_locked:
      


  lock cmpxchg %al,%bl


    ret
         .size   cmpxchg1_locked, .-cmpxchg1_locked

    
.globl cmpxchg1_locked_constant
         .type   cmpxchg1_locked_constant, @function
cmpxchg1_locked_constant:
      


  lock cmpxchg %al,%bl


    ret
         .size   cmpxchg1_locked_constant, .-cmpxchg1_locked_constant

    
.globl cmpxchg1_locked_allregs
         .type   cmpxchg1_locked_allregs, @function
cmpxchg1_locked_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  lock cmpxchg %al,%bl
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmpxchg1_locked_allregs, .-cmpxchg1_locked_allregs

    
.globl cmpxchg2_locked
         .type   cmpxchg2_locked, @function
cmpxchg2_locked:
      


  lock cmpxchg %ax,%bx


    ret
         .size   cmpxchg2_locked, .-cmpxchg2_locked

    
.globl cmpxchg2_locked_constant
         .type   cmpxchg2_locked_constant, @function
cmpxchg2_locked_constant:
      


  lock cmpxchg %ax,%bx


    ret
         .size   cmpxchg2_locked_constant, .-cmpxchg2_locked_constant

    
.globl cmpxchg2_locked_allregs
         .type   cmpxchg2_locked_allregs, @function
cmpxchg2_locked_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  lock cmpxchg %ax,%bx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmpxchg2_locked_allregs, .-cmpxchg2_locked_allregs

    
.globl cmpxchg3_locked
         .type   cmpxchg3_locked, @function
cmpxchg3_locked:
      


  lock cmpxchg %eax,%ebx


    ret
         .size   cmpxchg3_locked, .-cmpxchg3_locked

    
.globl cmpxchg3_locked_constant
         .type   cmpxchg3_locked_constant, @function
cmpxchg3_locked_constant:
      


  lock cmpxchg %eax,%ebx


    ret
         .size   cmpxchg3_locked_constant, .-cmpxchg3_locked_constant

    
.globl cmpxchg3_locked_allregs
         .type   cmpxchg3_locked_allregs, @function
cmpxchg3_locked_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  lock cmpxchg %eax,%ebx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmpxchg3_locked_allregs, .-cmpxchg3_locked_allregs

    
.globl cmpxchg4_locked
         .type   cmpxchg4_locked, @function
cmpxchg4_locked:
      


  lock cmpxchg %eax,(%ebx)


    ret
         .size   cmpxchg4_locked, .-cmpxchg4_locked

    
.globl cmpxchg4_locked_constant
         .type   cmpxchg4_locked_constant, @function
cmpxchg4_locked_constant:
      


  lock cmpxchg %eax,(%ebx)


    ret
         .size   cmpxchg4_locked_constant, .-cmpxchg4_locked_constant

    
.globl cmpxchg4_locked_allregs
         .type   cmpxchg4_locked_allregs, @function
cmpxchg4_locked_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  lock cmpxchg %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmpxchg4_locked_allregs, .-cmpxchg4_locked_allregs

    
.globl cmpxchg5_locked
         .type   cmpxchg5_locked, @function
cmpxchg5_locked:
      


  lock cmpxchg %al,%al


    ret
         .size   cmpxchg5_locked, .-cmpxchg5_locked

    
.globl cmpxchg5_locked_constant
         .type   cmpxchg5_locked_constant, @function
cmpxchg5_locked_constant:
      


  lock cmpxchg %al,%al


    ret
         .size   cmpxchg5_locked_constant, .-cmpxchg5_locked_constant

    
.globl cmpxchg5_locked_allregs
         .type   cmpxchg5_locked_allregs, @function
cmpxchg5_locked_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  lock cmpxchg %al,%al
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmpxchg5_locked_allregs, .-cmpxchg5_locked_allregs

    
.globl cpuid
         .type   cpuid, @function
cpuid:
      


  cpuid


    ret
         .size   cpuid, .-cpuid

    
.globl cpuid_constant
         .type   cpuid_constant, @function
cpuid_constant:
      


  cpuid


    ret
         .size   cpuid_constant, .-cpuid_constant

    
.globl cpuid_allregs
         .type   cpuid_allregs, @function
cpuid_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  cpuid
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cpuid_allregs, .-cpuid_allregs

    
.globl invd
         .type   invd, @function
invd:
      


  invd


    ret
         .size   invd, .-invd

    
.globl invd_constant
         .type   invd_constant, @function
invd_constant:
      


  invd


    ret
         .size   invd_constant, .-invd_constant

    
.globl invd_allregs
         .type   invd_allregs, @function
invd_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  invd
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   invd_allregs, .-invd_allregs

    
.globl invlpg
         .type   invlpg, @function
invlpg:
      


  invlpg (%eax)


    ret
         .size   invlpg, .-invlpg

    
.globl invlpg_constant
         .type   invlpg_constant, @function
invlpg_constant:
      


  invlpg (%eax)


    ret
         .size   invlpg_constant, .-invlpg_constant

    
.globl invlpg_allregs
         .type   invlpg_allregs, @function
invlpg_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  invlpg (%eax)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   invlpg_allregs, .-invlpg_allregs

    
.globl wbinvd
         .type   wbinvd, @function
wbinvd:
      


  wbinvd


    ret
         .size   wbinvd, .-wbinvd

    
.globl wbinvd_constant
         .type   wbinvd_constant, @function
wbinvd_constant:
      


  wbinvd


    ret
         .size   wbinvd_constant, .-wbinvd_constant

    
.globl wbinvd_allregs
         .type   wbinvd_allregs, @function
wbinvd_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  wbinvd
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   wbinvd_allregs, .-wbinvd_allregs

    
.globl xadd1
         .type   xadd1, @function
xadd1:
      


  xadd %al,%bl


    ret
         .size   xadd1, .-xadd1

    
.globl xadd1_constant
         .type   xadd1_constant, @function
xadd1_constant:
      


  xadd %al,%bl


    ret
         .size   xadd1_constant, .-xadd1_constant

    
.globl xadd1_allregs
         .type   xadd1_allregs, @function
xadd1_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  xadd %al,%bl
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   xadd1_allregs, .-xadd1_allregs

    
.globl xadd2
         .type   xadd2, @function
xadd2:
      


  xadd %ax,%bx


    ret
         .size   xadd2, .-xadd2

    
.globl xadd2_constant
         .type   xadd2_constant, @function
xadd2_constant:
      


  xadd %ax,%bx


    ret
         .size   xadd2_constant, .-xadd2_constant

    
.globl xadd2_allregs
         .type   xadd2_allregs, @function
xadd2_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  xadd %ax,%bx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   xadd2_allregs, .-xadd2_allregs

    
.globl xadd3
         .type   xadd3, @function
xadd3:
      


  xadd %eax,%ebx


    ret
         .size   xadd3, .-xadd3

    
.globl xadd3_constant
         .type   xadd3_constant, @function
xadd3_constant:
      


  xadd %eax,%ebx


    ret
         .size   xadd3_constant, .-xadd3_constant

    
.globl xadd3_allregs
         .type   xadd3_allregs, @function
xadd3_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  xadd %eax,%ebx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   xadd3_allregs, .-xadd3_allregs

    
.globl xadd4
         .type   xadd4, @function
xadd4:
      


  xadd %eax,(%ebx)


    ret
         .size   xadd4, .-xadd4

    
.globl xadd4_constant
         .type   xadd4_constant, @function
xadd4_constant:
      


  xadd %eax,(%ebx)


    ret
         .size   xadd4_constant, .-xadd4_constant

    
.globl xadd4_allregs
         .type   xadd4_allregs, @function
xadd4_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  xadd %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   xadd4_allregs, .-xadd4_allregs

    
.globl xadd5
         .type   xadd5, @function
xadd5:
      


  xadd %al,%al


    ret
         .size   xadd5, .-xadd5

    
.globl xadd5_constant
         .type   xadd5_constant, @function
xadd5_constant:
      


  xadd %al,%al


    ret
         .size   xadd5_constant, .-xadd5_constant

    
.globl xadd5_allregs
         .type   xadd5_allregs, @function
xadd5_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  xadd %al,%al
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   xadd5_allregs, .-xadd5_allregs

    
.globl xadd1_locked
         .type   xadd1_locked, @function
xadd1_locked:
      


  lock xadd %al,%bl


    ret
         .size   xadd1_locked, .-xadd1_locked

    
.globl xadd1_locked_constant
         .type   xadd1_locked_constant, @function
xadd1_locked_constant:
      


  lock xadd %al,%bl


    ret
         .size   xadd1_locked_constant, .-xadd1_locked_constant

    
.globl xadd1_locked_allregs
         .type   xadd1_locked_allregs, @function
xadd1_locked_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  lock xadd %al,%bl
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   xadd1_locked_allregs, .-xadd1_locked_allregs

    
.globl xadd2_locked
         .type   xadd2_locked, @function
xadd2_locked:
      


  lock xadd %ax,%bx


    ret
         .size   xadd2_locked, .-xadd2_locked

    
.globl xadd2_locked_constant
         .type   xadd2_locked_constant, @function
xadd2_locked_constant:
      


  lock xadd %ax,%bx


    ret
         .size   xadd2_locked_constant, .-xadd2_locked_constant

    
.globl xadd2_locked_allregs
         .type   xadd2_locked_allregs, @function
xadd2_locked_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  lock xadd %ax,%bx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   xadd2_locked_allregs, .-xadd2_locked_allregs

    
.globl xadd3_locked
         .type   xadd3_locked, @function
xadd3_locked:
      


  lock xadd %eax,%ebx


    ret
         .size   xadd3_locked, .-xadd3_locked

    
.globl xadd3_locked_constant
         .type   xadd3_locked_constant, @function
xadd3_locked_constant:
      


  lock xadd %eax,%ebx


    ret
         .size   xadd3_locked_constant, .-xadd3_locked_constant

    
.globl xadd3_locked_allregs
         .type   xadd3_locked_allregs, @function
xadd3_locked_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  lock xadd %eax,%ebx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   xadd3_locked_allregs, .-xadd3_locked_allregs

    
.globl xadd4_locked
         .type   xadd4_locked, @function
xadd4_locked:
      


  lock xadd %eax,(%ebx)


    ret
         .size   xadd4_locked, .-xadd4_locked

    
.globl xadd4_locked_constant
         .type   xadd4_locked_constant, @function
xadd4_locked_constant:
      


  lock xadd %eax,(%ebx)


    ret
         .size   xadd4_locked_constant, .-xadd4_locked_constant

    
.globl xadd4_locked_allregs
         .type   xadd4_locked_allregs, @function
xadd4_locked_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  lock xadd %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   xadd4_locked_allregs, .-xadd4_locked_allregs

    
.globl xadd5_locked
         .type   xadd5_locked, @function
xadd5_locked:
      


  lock xadd %al,%al


    ret
         .size   xadd5_locked, .-xadd5_locked

    
.globl xadd5_locked_constant
         .type   xadd5_locked_constant, @function
xadd5_locked_constant:
      


  lock xadd %al,%al


    ret
         .size   xadd5_locked_constant, .-xadd5_locked_constant

    
.globl xadd5_locked_allregs
         .type   xadd5_locked_allregs, @function
xadd5_locked_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  lock xadd %al,%al
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   xadd5_locked_allregs, .-xadd5_locked_allregs

    
.globl cmpxchg8b
         .type   cmpxchg8b, @function
cmpxchg8b:
      


  cmpxchg8b (%eax)


    ret
         .size   cmpxchg8b, .-cmpxchg8b

    
.globl cmpxchg8b_constant
         .type   cmpxchg8b_constant, @function
cmpxchg8b_constant:
      


  cmpxchg8b (%eax)


    ret
         .size   cmpxchg8b_constant, .-cmpxchg8b_constant

    
.globl cmpxchg8b_allregs
         .type   cmpxchg8b_allregs, @function
cmpxchg8b_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  cmpxchg8b (%eax)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmpxchg8b_allregs, .-cmpxchg8b_allregs

    
.globl cmpxchg8b_locked
         .type   cmpxchg8b_locked, @function
cmpxchg8b_locked:
      


  lock cmpxchg8b (%eax)


    ret
         .size   cmpxchg8b_locked, .-cmpxchg8b_locked

    
.globl cmpxchg8b_locked_constant
         .type   cmpxchg8b_locked_constant, @function
cmpxchg8b_locked_constant:
      


  lock cmpxchg8b (%eax)


    ret
         .size   cmpxchg8b_locked_constant, .-cmpxchg8b_locked_constant

    
.globl cmpxchg8b_locked_allregs
         .type   cmpxchg8b_locked_allregs, @function
cmpxchg8b_locked_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  lock cmpxchg8b (%eax)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmpxchg8b_locked_allregs, .-cmpxchg8b_locked_allregs

    
.globl rdtsc
         .type   rdtsc, @function
rdtsc:
      


  rdtsc


    ret
         .size   rdtsc, .-rdtsc

    
.globl rdtsc_constant
         .type   rdtsc_constant, @function
rdtsc_constant:
      


  rdtsc


    ret
         .size   rdtsc_constant, .-rdtsc_constant

    
.globl rdtsc_allregs
         .type   rdtsc_allregs, @function
rdtsc_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  rdtsc
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   rdtsc_allregs, .-rdtsc_allregs

    
.globl rdmsr
         .type   rdmsr, @function
rdmsr:
      


  rdmsr


    ret
         .size   rdmsr, .-rdmsr

    
.globl rdmsr_constant
         .type   rdmsr_constant, @function
rdmsr_constant:
      


  rdmsr


    ret
         .size   rdmsr_constant, .-rdmsr_constant

    
.globl rdmsr_allregs
         .type   rdmsr_allregs, @function
rdmsr_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  rdmsr
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   rdmsr_allregs, .-rdmsr_allregs

    
.globl wrmsr
         .type   wrmsr, @function
wrmsr:
      


  wrmsr


    ret
         .size   wrmsr, .-wrmsr

    
.globl wrmsr_constant
         .type   wrmsr_constant, @function
wrmsr_constant:
      


  wrmsr


    ret
         .size   wrmsr_constant, .-wrmsr_constant

    
.globl wrmsr_allregs
         .type   wrmsr_allregs, @function
wrmsr_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  wrmsr
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   wrmsr_allregs, .-wrmsr_allregs

    
.globl cmov1
         .type   cmov1, @function
cmov1:
      


  cmova %bx,%ax


    ret
         .size   cmov1, .-cmov1

    
.globl cmov1_constant
         .type   cmov1_constant, @function
cmov1_constant:
      


  cmova %bx,%ax


    ret
         .size   cmov1_constant, .-cmov1_constant

    
.globl cmov1_allregs
         .type   cmov1_allregs, @function
cmov1_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  cmova %bx,%ax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov1_allregs, .-cmov1_allregs

    
.globl cmov2
         .type   cmov2, @function
cmov2:
      


  cmova %ebx,%ax


    ret
         .size   cmov2, .-cmov2

    
.globl cmov2_constant
         .type   cmov2_constant, @function
cmov2_constant:
      


  cmova %ebx,%ax


    ret
         .size   cmov2_constant, .-cmov2_constant

    
.globl cmov2_allregs
         .type   cmov2_allregs, @function
cmov2_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  cmova %ebx,%ax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov2_allregs, .-cmov2_allregs

    
.globl cmov3
         .type   cmov3, @function
cmov3:
      


  cmova 12(%ebx),%ax


    ret
         .size   cmov3, .-cmov3

    
.globl cmov3_constant
         .type   cmov3_constant, @function
cmov3_constant:
      


  cmova 12(%ebx),%ax


    ret
         .size   cmov3_constant, .-cmov3_constant

    
.globl cmov3_allregs
         .type   cmov3_allregs, @function
cmov3_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  cmova 12(%ebx),%ax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov3_allregs, .-cmov3_allregs

    
.globl cmov4
         .type   cmov4, @function
cmov4:
      


  cmova 34(%ebx),%eax


    ret
         .size   cmov4, .-cmov4

    
.globl cmov4_constant
         .type   cmov4_constant, @function
cmov4_constant:
      


  cmova 34(%ebx),%eax


    ret
         .size   cmov4_constant, .-cmov4_constant

    
.globl cmov4_allregs
         .type   cmov4_allregs, @function
cmov4_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  cmova 34(%ebx),%eax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov4_allregs, .-cmov4_allregs

    
.globl cmov_w_with_code_0
         .type   cmov_w_with_code_0, @function
cmov_w_with_code_0:
      


  .byte 0x3c,0x02,0x66,0x0f,0x40,0xd8


    ret
         .size   cmov_w_with_code_0, .-cmov_w_with_code_0

    
.globl cmov_w_with_code_0_constant
         .type   cmov_w_with_code_0_constant, @function
cmov_w_with_code_0_constant:
      


  .byte 0x3c,0x02,0x66,0x0f,0x40,0xd8


    ret
         .size   cmov_w_with_code_0_constant, .-cmov_w_with_code_0_constant

    
.globl cmov_w_with_code_0_allregs
         .type   cmov_w_with_code_0_allregs, @function
cmov_w_with_code_0_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x66,0x0f,0x40,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_w_with_code_0_allregs, .-cmov_w_with_code_0_allregs

    
.globl cmov_w_with_code_1
         .type   cmov_w_with_code_1, @function
cmov_w_with_code_1:
      


  .byte 0x3c,0x02,0x66,0x0f,0x41,0xd8


    ret
         .size   cmov_w_with_code_1, .-cmov_w_with_code_1

    
.globl cmov_w_with_code_1_constant
         .type   cmov_w_with_code_1_constant, @function
cmov_w_with_code_1_constant:
      


  .byte 0x3c,0x02,0x66,0x0f,0x41,0xd8


    ret
         .size   cmov_w_with_code_1_constant, .-cmov_w_with_code_1_constant

    
.globl cmov_w_with_code_1_allregs
         .type   cmov_w_with_code_1_allregs, @function
cmov_w_with_code_1_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x66,0x0f,0x41,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_w_with_code_1_allregs, .-cmov_w_with_code_1_allregs

    
.globl cmov_w_with_code_2
         .type   cmov_w_with_code_2, @function
cmov_w_with_code_2:
      


  .byte 0x3c,0x02,0x66,0x0f,0x42,0xd8


    ret
         .size   cmov_w_with_code_2, .-cmov_w_with_code_2

    
.globl cmov_w_with_code_2_constant
         .type   cmov_w_with_code_2_constant, @function
cmov_w_with_code_2_constant:
      


  .byte 0x3c,0x02,0x66,0x0f,0x42,0xd8


    ret
         .size   cmov_w_with_code_2_constant, .-cmov_w_with_code_2_constant

    
.globl cmov_w_with_code_2_allregs
         .type   cmov_w_with_code_2_allregs, @function
cmov_w_with_code_2_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x66,0x0f,0x42,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_w_with_code_2_allregs, .-cmov_w_with_code_2_allregs

    
.globl cmov_w_with_code_3
         .type   cmov_w_with_code_3, @function
cmov_w_with_code_3:
      


  .byte 0x3c,0x02,0x66,0x0f,0x43,0xd8


    ret
         .size   cmov_w_with_code_3, .-cmov_w_with_code_3

    
.globl cmov_w_with_code_3_constant
         .type   cmov_w_with_code_3_constant, @function
cmov_w_with_code_3_constant:
      


  .byte 0x3c,0x02,0x66,0x0f,0x43,0xd8


    ret
         .size   cmov_w_with_code_3_constant, .-cmov_w_with_code_3_constant

    
.globl cmov_w_with_code_3_allregs
         .type   cmov_w_with_code_3_allregs, @function
cmov_w_with_code_3_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x66,0x0f,0x43,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_w_with_code_3_allregs, .-cmov_w_with_code_3_allregs

    
.globl cmov_w_with_code_4
         .type   cmov_w_with_code_4, @function
cmov_w_with_code_4:
      


  .byte 0x3c,0x02,0x66,0x0f,0x44,0xd8


    ret
         .size   cmov_w_with_code_4, .-cmov_w_with_code_4

    
.globl cmov_w_with_code_4_constant
         .type   cmov_w_with_code_4_constant, @function
cmov_w_with_code_4_constant:
      


  .byte 0x3c,0x02,0x66,0x0f,0x44,0xd8


    ret
         .size   cmov_w_with_code_4_constant, .-cmov_w_with_code_4_constant

    
.globl cmov_w_with_code_4_allregs
         .type   cmov_w_with_code_4_allregs, @function
cmov_w_with_code_4_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x66,0x0f,0x44,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_w_with_code_4_allregs, .-cmov_w_with_code_4_allregs

    
.globl cmov_w_with_code_5
         .type   cmov_w_with_code_5, @function
cmov_w_with_code_5:
      


  .byte 0x3c,0x02,0x66,0x0f,0x45,0xd8


    ret
         .size   cmov_w_with_code_5, .-cmov_w_with_code_5

    
.globl cmov_w_with_code_5_constant
         .type   cmov_w_with_code_5_constant, @function
cmov_w_with_code_5_constant:
      


  .byte 0x3c,0x02,0x66,0x0f,0x45,0xd8


    ret
         .size   cmov_w_with_code_5_constant, .-cmov_w_with_code_5_constant

    
.globl cmov_w_with_code_5_allregs
         .type   cmov_w_with_code_5_allregs, @function
cmov_w_with_code_5_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x66,0x0f,0x45,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_w_with_code_5_allregs, .-cmov_w_with_code_5_allregs

    
.globl cmov_w_with_code_6
         .type   cmov_w_with_code_6, @function
cmov_w_with_code_6:
      


  .byte 0x3c,0x02,0x66,0x0f,0x46,0xd8


    ret
         .size   cmov_w_with_code_6, .-cmov_w_with_code_6

    
.globl cmov_w_with_code_6_constant
         .type   cmov_w_with_code_6_constant, @function
cmov_w_with_code_6_constant:
      


  .byte 0x3c,0x02,0x66,0x0f,0x46,0xd8


    ret
         .size   cmov_w_with_code_6_constant, .-cmov_w_with_code_6_constant

    
.globl cmov_w_with_code_6_allregs
         .type   cmov_w_with_code_6_allregs, @function
cmov_w_with_code_6_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x66,0x0f,0x46,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_w_with_code_6_allregs, .-cmov_w_with_code_6_allregs

    
.globl cmov_w_with_code_7
         .type   cmov_w_with_code_7, @function
cmov_w_with_code_7:
      


  .byte 0x3c,0x02,0x66,0x0f,0x47,0xd8


    ret
         .size   cmov_w_with_code_7, .-cmov_w_with_code_7

    
.globl cmov_w_with_code_7_constant
         .type   cmov_w_with_code_7_constant, @function
cmov_w_with_code_7_constant:
      


  .byte 0x3c,0x02,0x66,0x0f,0x47,0xd8


    ret
         .size   cmov_w_with_code_7_constant, .-cmov_w_with_code_7_constant

    
.globl cmov_w_with_code_7_allregs
         .type   cmov_w_with_code_7_allregs, @function
cmov_w_with_code_7_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x66,0x0f,0x47,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_w_with_code_7_allregs, .-cmov_w_with_code_7_allregs

    
.globl cmov_w_with_code_8
         .type   cmov_w_with_code_8, @function
cmov_w_with_code_8:
      


  .byte 0x3c,0x02,0x66,0x0f,0x48,0xd8


    ret
         .size   cmov_w_with_code_8, .-cmov_w_with_code_8

    
.globl cmov_w_with_code_8_constant
         .type   cmov_w_with_code_8_constant, @function
cmov_w_with_code_8_constant:
      


  .byte 0x3c,0x02,0x66,0x0f,0x48,0xd8


    ret
         .size   cmov_w_with_code_8_constant, .-cmov_w_with_code_8_constant

    
.globl cmov_w_with_code_8_allregs
         .type   cmov_w_with_code_8_allregs, @function
cmov_w_with_code_8_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x66,0x0f,0x48,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_w_with_code_8_allregs, .-cmov_w_with_code_8_allregs

    
.globl cmov_w_with_code_9
         .type   cmov_w_with_code_9, @function
cmov_w_with_code_9:
      


  .byte 0x3c,0x02,0x66,0x0f,0x49,0xd8


    ret
         .size   cmov_w_with_code_9, .-cmov_w_with_code_9

    
.globl cmov_w_with_code_9_constant
         .type   cmov_w_with_code_9_constant, @function
cmov_w_with_code_9_constant:
      


  .byte 0x3c,0x02,0x66,0x0f,0x49,0xd8


    ret
         .size   cmov_w_with_code_9_constant, .-cmov_w_with_code_9_constant

    
.globl cmov_w_with_code_9_allregs
         .type   cmov_w_with_code_9_allregs, @function
cmov_w_with_code_9_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x66,0x0f,0x49,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_w_with_code_9_allregs, .-cmov_w_with_code_9_allregs

    
.globl cmov_w_with_code_a
         .type   cmov_w_with_code_a, @function
cmov_w_with_code_a:
      


  .byte 0x3c,0x02,0x66,0x0f,0x4a,0xd8


    ret
         .size   cmov_w_with_code_a, .-cmov_w_with_code_a

    
.globl cmov_w_with_code_a_constant
         .type   cmov_w_with_code_a_constant, @function
cmov_w_with_code_a_constant:
      


  .byte 0x3c,0x02,0x66,0x0f,0x4a,0xd8


    ret
         .size   cmov_w_with_code_a_constant, .-cmov_w_with_code_a_constant

    
.globl cmov_w_with_code_a_allregs
         .type   cmov_w_with_code_a_allregs, @function
cmov_w_with_code_a_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x66,0x0f,0x4a,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_w_with_code_a_allregs, .-cmov_w_with_code_a_allregs

    
.globl cmov_w_with_code_b
         .type   cmov_w_with_code_b, @function
cmov_w_with_code_b:
      


  .byte 0x3c,0x02,0x66,0x0f,0x4b,0xd8


    ret
         .size   cmov_w_with_code_b, .-cmov_w_with_code_b

    
.globl cmov_w_with_code_b_constant
         .type   cmov_w_with_code_b_constant, @function
cmov_w_with_code_b_constant:
      


  .byte 0x3c,0x02,0x66,0x0f,0x4b,0xd8


    ret
         .size   cmov_w_with_code_b_constant, .-cmov_w_with_code_b_constant

    
.globl cmov_w_with_code_b_allregs
         .type   cmov_w_with_code_b_allregs, @function
cmov_w_with_code_b_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x66,0x0f,0x4b,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_w_with_code_b_allregs, .-cmov_w_with_code_b_allregs

    
.globl cmov_w_with_code_c
         .type   cmov_w_with_code_c, @function
cmov_w_with_code_c:
      


  .byte 0x3c,0x02,0x66,0x0f,0x4c,0xd8


    ret
         .size   cmov_w_with_code_c, .-cmov_w_with_code_c

    
.globl cmov_w_with_code_c_constant
         .type   cmov_w_with_code_c_constant, @function
cmov_w_with_code_c_constant:
      


  .byte 0x3c,0x02,0x66,0x0f,0x4c,0xd8


    ret
         .size   cmov_w_with_code_c_constant, .-cmov_w_with_code_c_constant

    
.globl cmov_w_with_code_c_allregs
         .type   cmov_w_with_code_c_allregs, @function
cmov_w_with_code_c_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x66,0x0f,0x4c,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_w_with_code_c_allregs, .-cmov_w_with_code_c_allregs

    
.globl cmov_w_with_code_d
         .type   cmov_w_with_code_d, @function
cmov_w_with_code_d:
      


  .byte 0x3c,0x02,0x66,0x0f,0x4d,0xd8


    ret
         .size   cmov_w_with_code_d, .-cmov_w_with_code_d

    
.globl cmov_w_with_code_d_constant
         .type   cmov_w_with_code_d_constant, @function
cmov_w_with_code_d_constant:
      


  .byte 0x3c,0x02,0x66,0x0f,0x4d,0xd8


    ret
         .size   cmov_w_with_code_d_constant, .-cmov_w_with_code_d_constant

    
.globl cmov_w_with_code_d_allregs
         .type   cmov_w_with_code_d_allregs, @function
cmov_w_with_code_d_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x66,0x0f,0x4d,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_w_with_code_d_allregs, .-cmov_w_with_code_d_allregs

    
.globl cmov_w_with_code_e
         .type   cmov_w_with_code_e, @function
cmov_w_with_code_e:
      


  .byte 0x3c,0x02,0x66,0x0f,0x4e,0xd8


    ret
         .size   cmov_w_with_code_e, .-cmov_w_with_code_e

    
.globl cmov_w_with_code_e_constant
         .type   cmov_w_with_code_e_constant, @function
cmov_w_with_code_e_constant:
      


  .byte 0x3c,0x02,0x66,0x0f,0x4e,0xd8


    ret
         .size   cmov_w_with_code_e_constant, .-cmov_w_with_code_e_constant

    
.globl cmov_w_with_code_e_allregs
         .type   cmov_w_with_code_e_allregs, @function
cmov_w_with_code_e_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x66,0x0f,0x4e,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_w_with_code_e_allregs, .-cmov_w_with_code_e_allregs

    
.globl cmov_w_with_code_f
         .type   cmov_w_with_code_f, @function
cmov_w_with_code_f:
      


  .byte 0x3c,0x02,0x66,0x0f,0x4f,0xd8


    ret
         .size   cmov_w_with_code_f, .-cmov_w_with_code_f

    
.globl cmov_w_with_code_f_constant
         .type   cmov_w_with_code_f_constant, @function
cmov_w_with_code_f_constant:
      


  .byte 0x3c,0x02,0x66,0x0f,0x4f,0xd8


    ret
         .size   cmov_w_with_code_f_constant, .-cmov_w_with_code_f_constant

    
.globl cmov_w_with_code_f_allregs
         .type   cmov_w_with_code_f_allregs, @function
cmov_w_with_code_f_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x66,0x0f,0x4f,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_w_with_code_f_allregs, .-cmov_w_with_code_f_allregs

    
.globl cmov_l_with_code_0
         .type   cmov_l_with_code_0, @function
cmov_l_with_code_0:
      


  .byte 0x3c,0x02,0x0f,0x40,0xd8


    ret
         .size   cmov_l_with_code_0, .-cmov_l_with_code_0

    
.globl cmov_l_with_code_0_constant
         .type   cmov_l_with_code_0_constant, @function
cmov_l_with_code_0_constant:
      


  .byte 0x3c,0x02,0x0f,0x40,0xd8


    ret
         .size   cmov_l_with_code_0_constant, .-cmov_l_with_code_0_constant

    
.globl cmov_l_with_code_0_allregs
         .type   cmov_l_with_code_0_allregs, @function
cmov_l_with_code_0_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x0f,0x40,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_l_with_code_0_allregs, .-cmov_l_with_code_0_allregs

    
.globl cmov_l_with_code_1
         .type   cmov_l_with_code_1, @function
cmov_l_with_code_1:
      


  .byte 0x3c,0x02,0x0f,0x41,0xd8


    ret
         .size   cmov_l_with_code_1, .-cmov_l_with_code_1

    
.globl cmov_l_with_code_1_constant
         .type   cmov_l_with_code_1_constant, @function
cmov_l_with_code_1_constant:
      


  .byte 0x3c,0x02,0x0f,0x41,0xd8


    ret
         .size   cmov_l_with_code_1_constant, .-cmov_l_with_code_1_constant

    
.globl cmov_l_with_code_1_allregs
         .type   cmov_l_with_code_1_allregs, @function
cmov_l_with_code_1_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x0f,0x41,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_l_with_code_1_allregs, .-cmov_l_with_code_1_allregs

    
.globl cmov_l_with_code_2
         .type   cmov_l_with_code_2, @function
cmov_l_with_code_2:
      


  .byte 0x3c,0x02,0x0f,0x42,0xd8


    ret
         .size   cmov_l_with_code_2, .-cmov_l_with_code_2

    
.globl cmov_l_with_code_2_constant
         .type   cmov_l_with_code_2_constant, @function
cmov_l_with_code_2_constant:
      


  .byte 0x3c,0x02,0x0f,0x42,0xd8


    ret
         .size   cmov_l_with_code_2_constant, .-cmov_l_with_code_2_constant

    
.globl cmov_l_with_code_2_allregs
         .type   cmov_l_with_code_2_allregs, @function
cmov_l_with_code_2_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x0f,0x42,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_l_with_code_2_allregs, .-cmov_l_with_code_2_allregs

    
.globl cmov_l_with_code_3
         .type   cmov_l_with_code_3, @function
cmov_l_with_code_3:
      


  .byte 0x3c,0x02,0x0f,0x43,0xd8


    ret
         .size   cmov_l_with_code_3, .-cmov_l_with_code_3

    
.globl cmov_l_with_code_3_constant
         .type   cmov_l_with_code_3_constant, @function
cmov_l_with_code_3_constant:
      


  .byte 0x3c,0x02,0x0f,0x43,0xd8


    ret
         .size   cmov_l_with_code_3_constant, .-cmov_l_with_code_3_constant

    
.globl cmov_l_with_code_3_allregs
         .type   cmov_l_with_code_3_allregs, @function
cmov_l_with_code_3_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x0f,0x43,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_l_with_code_3_allregs, .-cmov_l_with_code_3_allregs

    
.globl cmov_l_with_code_4
         .type   cmov_l_with_code_4, @function
cmov_l_with_code_4:
      


  .byte 0x3c,0x02,0x0f,0x44,0xd8


    ret
         .size   cmov_l_with_code_4, .-cmov_l_with_code_4

    
.globl cmov_l_with_code_4_constant
         .type   cmov_l_with_code_4_constant, @function
cmov_l_with_code_4_constant:
      


  .byte 0x3c,0x02,0x0f,0x44,0xd8


    ret
         .size   cmov_l_with_code_4_constant, .-cmov_l_with_code_4_constant

    
.globl cmov_l_with_code_4_allregs
         .type   cmov_l_with_code_4_allregs, @function
cmov_l_with_code_4_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x0f,0x44,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_l_with_code_4_allregs, .-cmov_l_with_code_4_allregs

    
.globl cmov_l_with_code_5
         .type   cmov_l_with_code_5, @function
cmov_l_with_code_5:
      


  .byte 0x3c,0x02,0x0f,0x45,0xd8


    ret
         .size   cmov_l_with_code_5, .-cmov_l_with_code_5

    
.globl cmov_l_with_code_5_constant
         .type   cmov_l_with_code_5_constant, @function
cmov_l_with_code_5_constant:
      


  .byte 0x3c,0x02,0x0f,0x45,0xd8


    ret
         .size   cmov_l_with_code_5_constant, .-cmov_l_with_code_5_constant

    
.globl cmov_l_with_code_5_allregs
         .type   cmov_l_with_code_5_allregs, @function
cmov_l_with_code_5_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x0f,0x45,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_l_with_code_5_allregs, .-cmov_l_with_code_5_allregs

    
.globl cmov_l_with_code_6
         .type   cmov_l_with_code_6, @function
cmov_l_with_code_6:
      


  .byte 0x3c,0x02,0x0f,0x46,0xd8


    ret
         .size   cmov_l_with_code_6, .-cmov_l_with_code_6

    
.globl cmov_l_with_code_6_constant
         .type   cmov_l_with_code_6_constant, @function
cmov_l_with_code_6_constant:
      


  .byte 0x3c,0x02,0x0f,0x46,0xd8


    ret
         .size   cmov_l_with_code_6_constant, .-cmov_l_with_code_6_constant

    
.globl cmov_l_with_code_6_allregs
         .type   cmov_l_with_code_6_allregs, @function
cmov_l_with_code_6_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x0f,0x46,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_l_with_code_6_allregs, .-cmov_l_with_code_6_allregs

    
.globl cmov_l_with_code_7
         .type   cmov_l_with_code_7, @function
cmov_l_with_code_7:
      


  .byte 0x3c,0x02,0x0f,0x47,0xd8


    ret
         .size   cmov_l_with_code_7, .-cmov_l_with_code_7

    
.globl cmov_l_with_code_7_constant
         .type   cmov_l_with_code_7_constant, @function
cmov_l_with_code_7_constant:
      


  .byte 0x3c,0x02,0x0f,0x47,0xd8


    ret
         .size   cmov_l_with_code_7_constant, .-cmov_l_with_code_7_constant

    
.globl cmov_l_with_code_7_allregs
         .type   cmov_l_with_code_7_allregs, @function
cmov_l_with_code_7_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x0f,0x47,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_l_with_code_7_allregs, .-cmov_l_with_code_7_allregs

    
.globl cmov_l_with_code_8
         .type   cmov_l_with_code_8, @function
cmov_l_with_code_8:
      


  .byte 0x3c,0x02,0x0f,0x48,0xd8


    ret
         .size   cmov_l_with_code_8, .-cmov_l_with_code_8

    
.globl cmov_l_with_code_8_constant
         .type   cmov_l_with_code_8_constant, @function
cmov_l_with_code_8_constant:
      


  .byte 0x3c,0x02,0x0f,0x48,0xd8


    ret
         .size   cmov_l_with_code_8_constant, .-cmov_l_with_code_8_constant

    
.globl cmov_l_with_code_8_allregs
         .type   cmov_l_with_code_8_allregs, @function
cmov_l_with_code_8_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x0f,0x48,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_l_with_code_8_allregs, .-cmov_l_with_code_8_allregs

    
.globl cmov_l_with_code_9
         .type   cmov_l_with_code_9, @function
cmov_l_with_code_9:
      


  .byte 0x3c,0x02,0x0f,0x49,0xd8


    ret
         .size   cmov_l_with_code_9, .-cmov_l_with_code_9

    
.globl cmov_l_with_code_9_constant
         .type   cmov_l_with_code_9_constant, @function
cmov_l_with_code_9_constant:
      


  .byte 0x3c,0x02,0x0f,0x49,0xd8


    ret
         .size   cmov_l_with_code_9_constant, .-cmov_l_with_code_9_constant

    
.globl cmov_l_with_code_9_allregs
         .type   cmov_l_with_code_9_allregs, @function
cmov_l_with_code_9_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x0f,0x49,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_l_with_code_9_allregs, .-cmov_l_with_code_9_allregs

    
.globl cmov_l_with_code_a
         .type   cmov_l_with_code_a, @function
cmov_l_with_code_a:
      


  .byte 0x3c,0x02,0x0f,0x4a,0xd8


    ret
         .size   cmov_l_with_code_a, .-cmov_l_with_code_a

    
.globl cmov_l_with_code_a_constant
         .type   cmov_l_with_code_a_constant, @function
cmov_l_with_code_a_constant:
      


  .byte 0x3c,0x02,0x0f,0x4a,0xd8


    ret
         .size   cmov_l_with_code_a_constant, .-cmov_l_with_code_a_constant

    
.globl cmov_l_with_code_a_allregs
         .type   cmov_l_with_code_a_allregs, @function
cmov_l_with_code_a_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x0f,0x4a,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_l_with_code_a_allregs, .-cmov_l_with_code_a_allregs

    
.globl cmov_l_with_code_b
         .type   cmov_l_with_code_b, @function
cmov_l_with_code_b:
      


  .byte 0x3c,0x02,0x0f,0x4b,0xd8


    ret
         .size   cmov_l_with_code_b, .-cmov_l_with_code_b

    
.globl cmov_l_with_code_b_constant
         .type   cmov_l_with_code_b_constant, @function
cmov_l_with_code_b_constant:
      


  .byte 0x3c,0x02,0x0f,0x4b,0xd8


    ret
         .size   cmov_l_with_code_b_constant, .-cmov_l_with_code_b_constant

    
.globl cmov_l_with_code_b_allregs
         .type   cmov_l_with_code_b_allregs, @function
cmov_l_with_code_b_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x0f,0x4b,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_l_with_code_b_allregs, .-cmov_l_with_code_b_allregs

    
.globl cmov_l_with_code_c
         .type   cmov_l_with_code_c, @function
cmov_l_with_code_c:
      


  .byte 0x3c,0x02,0x0f,0x4c,0xd8


    ret
         .size   cmov_l_with_code_c, .-cmov_l_with_code_c

    
.globl cmov_l_with_code_c_constant
         .type   cmov_l_with_code_c_constant, @function
cmov_l_with_code_c_constant:
      


  .byte 0x3c,0x02,0x0f,0x4c,0xd8


    ret
         .size   cmov_l_with_code_c_constant, .-cmov_l_with_code_c_constant

    
.globl cmov_l_with_code_c_allregs
         .type   cmov_l_with_code_c_allregs, @function
cmov_l_with_code_c_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x0f,0x4c,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_l_with_code_c_allregs, .-cmov_l_with_code_c_allregs

    
.globl cmov_l_with_code_d
         .type   cmov_l_with_code_d, @function
cmov_l_with_code_d:
      


  .byte 0x3c,0x02,0x0f,0x4d,0xd8


    ret
         .size   cmov_l_with_code_d, .-cmov_l_with_code_d

    
.globl cmov_l_with_code_d_constant
         .type   cmov_l_with_code_d_constant, @function
cmov_l_with_code_d_constant:
      


  .byte 0x3c,0x02,0x0f,0x4d,0xd8


    ret
         .size   cmov_l_with_code_d_constant, .-cmov_l_with_code_d_constant

    
.globl cmov_l_with_code_d_allregs
         .type   cmov_l_with_code_d_allregs, @function
cmov_l_with_code_d_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x0f,0x4d,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_l_with_code_d_allregs, .-cmov_l_with_code_d_allregs

    
.globl cmov_l_with_code_e
         .type   cmov_l_with_code_e, @function
cmov_l_with_code_e:
      


  .byte 0x3c,0x02,0x0f,0x4e,0xd8


    ret
         .size   cmov_l_with_code_e, .-cmov_l_with_code_e

    
.globl cmov_l_with_code_e_constant
         .type   cmov_l_with_code_e_constant, @function
cmov_l_with_code_e_constant:
      


  .byte 0x3c,0x02,0x0f,0x4e,0xd8


    ret
         .size   cmov_l_with_code_e_constant, .-cmov_l_with_code_e_constant

    
.globl cmov_l_with_code_e_allregs
         .type   cmov_l_with_code_e_allregs, @function
cmov_l_with_code_e_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x0f,0x4e,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_l_with_code_e_allregs, .-cmov_l_with_code_e_allregs

    
.globl cmov_l_with_code_f
         .type   cmov_l_with_code_f, @function
cmov_l_with_code_f:
      


  .byte 0x3c,0x02,0x0f,0x4f,0xd8


    ret
         .size   cmov_l_with_code_f, .-cmov_l_with_code_f

    
.globl cmov_l_with_code_f_constant
         .type   cmov_l_with_code_f_constant, @function
cmov_l_with_code_f_constant:
      


  .byte 0x3c,0x02,0x0f,0x4f,0xd8


    ret
         .size   cmov_l_with_code_f_constant, .-cmov_l_with_code_f_constant

    
.globl cmov_l_with_code_f_allregs
         .type   cmov_l_with_code_f_allregs, @function
cmov_l_with_code_f_allregs:
      

  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov 4124,%esp
  .byte 0x3c,0x02,0x0f,0x4f,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  mov %esp,8220

    ret
         .size   cmov_l_with_code_f_allregs, .-cmov_l_with_code_f_allregs

.globl main
         .type   main, @function
main:
          call bswap
          call bswap_constant
          call bswap_allregs
          call cmpxchg1
          call cmpxchg1_constant
          call cmpxchg1_allregs
          call cmpxchg2
          call cmpxchg2_constant
          call cmpxchg2_allregs
          call cmpxchg3
          call cmpxchg3_constant
          call cmpxchg3_allregs
          call cmpxchg4
          call cmpxchg4_constant
          call cmpxchg4_allregs
          call cmpxchg5
          call cmpxchg5_constant
          call cmpxchg5_allregs
          call cmpxchg1_locked
          call cmpxchg1_locked_constant
          call cmpxchg1_locked_allregs
          call cmpxchg2_locked
          call cmpxchg2_locked_constant
          call cmpxchg2_locked_allregs
          call cmpxchg3_locked
          call cmpxchg3_locked_constant
          call cmpxchg3_locked_allregs
          call cmpxchg4_locked
          call cmpxchg4_locked_constant
          call cmpxchg4_locked_allregs
          call cmpxchg5_locked
          call cmpxchg5_locked_constant
          call cmpxchg5_locked_allregs
          call cpuid
          call cpuid_constant
          call cpuid_allregs
          call invd
          call invd_constant
          call invd_allregs
          call invlpg
          call invlpg_constant
          call invlpg_allregs
          call wbinvd
          call wbinvd_constant
          call wbinvd_allregs
          call xadd1
          call xadd1_constant
          call xadd1_allregs
          call xadd2
          call xadd2_constant
          call xadd2_allregs
          call xadd3
          call xadd3_constant
          call xadd3_allregs
          call xadd4
          call xadd4_constant
          call xadd4_allregs
          call xadd5
          call xadd5_constant
          call xadd5_allregs
          call xadd1_locked
          call xadd1_locked_constant
          call xadd1_locked_allregs
          call xadd2_locked
          call xadd2_locked_constant
          call xadd2_locked_allregs
          call xadd3_locked
          call xadd3_locked_constant
          call xadd3_locked_allregs
          call xadd4_locked
          call xadd4_locked_constant
          call xadd4_locked_allregs
          call xadd5_locked
          call xadd5_locked_constant
          call xadd5_locked_allregs
          call cmpxchg8b
          call cmpxchg8b_constant
          call cmpxchg8b_allregs
          call cmpxchg8b_locked
          call cmpxchg8b_locked_constant
          call cmpxchg8b_locked_allregs
          call rdtsc
          call rdtsc_constant
          call rdtsc_allregs
          call rdmsr
          call rdmsr_constant
          call rdmsr_allregs
          call wrmsr
          call wrmsr_constant
          call wrmsr_allregs
          call cmov1
          call cmov1_constant
          call cmov1_allregs
          call cmov2
          call cmov2_constant
          call cmov2_allregs
          call cmov3
          call cmov3_constant
          call cmov3_allregs
          call cmov4
          call cmov4_constant
          call cmov4_allregs
          call cmov_w_with_code_0
          call cmov_w_with_code_0_constant
          call cmov_w_with_code_0_allregs
          call cmov_w_with_code_1
          call cmov_w_with_code_1_constant
          call cmov_w_with_code_1_allregs
          call cmov_w_with_code_2
          call cmov_w_with_code_2_constant
          call cmov_w_with_code_2_allregs
          call cmov_w_with_code_3
          call cmov_w_with_code_3_constant
          call cmov_w_with_code_3_allregs
          call cmov_w_with_code_4
          call cmov_w_with_code_4_constant
          call cmov_w_with_code_4_allregs
          call cmov_w_with_code_5
          call cmov_w_with_code_5_constant
          call cmov_w_with_code_5_allregs
          call cmov_w_with_code_6
          call cmov_w_with_code_6_constant
          call cmov_w_with_code_6_allregs
          call cmov_w_with_code_7
          call cmov_w_with_code_7_constant
          call cmov_w_with_code_7_allregs
          call cmov_w_with_code_8
          call cmov_w_with_code_8_constant
          call cmov_w_with_code_8_allregs
          call cmov_w_with_code_9
          call cmov_w_with_code_9_constant
          call cmov_w_with_code_9_allregs
          call cmov_w_with_code_a
          call cmov_w_with_code_a_constant
          call cmov_w_with_code_a_allregs
          call cmov_w_with_code_b
          call cmov_w_with_code_b_constant
          call cmov_w_with_code_b_allregs
          call cmov_w_with_code_c
          call cmov_w_with_code_c_constant
          call cmov_w_with_code_c_allregs
          call cmov_w_with_code_d
          call cmov_w_with_code_d_constant
          call cmov_w_with_code_d_allregs
          call cmov_w_with_code_e
          call cmov_w_with_code_e_constant
          call cmov_w_with_code_e_allregs
          call cmov_w_with_code_f
          call cmov_w_with_code_f_constant
          call cmov_w_with_code_f_allregs
          call cmov_l_with_code_0
          call cmov_l_with_code_0_constant
          call cmov_l_with_code_0_allregs
          call cmov_l_with_code_1
          call cmov_l_with_code_1_constant
          call cmov_l_with_code_1_allregs
          call cmov_l_with_code_2
          call cmov_l_with_code_2_constant
          call cmov_l_with_code_2_allregs
          call cmov_l_with_code_3
          call cmov_l_with_code_3_constant
          call cmov_l_with_code_3_allregs
          call cmov_l_with_code_4
          call cmov_l_with_code_4_constant
          call cmov_l_with_code_4_allregs
          call cmov_l_with_code_5
          call cmov_l_with_code_5_constant
          call cmov_l_with_code_5_allregs
          call cmov_l_with_code_6
          call cmov_l_with_code_6_constant
          call cmov_l_with_code_6_allregs
          call cmov_l_with_code_7
          call cmov_l_with_code_7_constant
          call cmov_l_with_code_7_allregs
          call cmov_l_with_code_8
          call cmov_l_with_code_8_constant
          call cmov_l_with_code_8_allregs
          call cmov_l_with_code_9
          call cmov_l_with_code_9_constant
          call cmov_l_with_code_9_allregs
          call cmov_l_with_code_a
          call cmov_l_with_code_a_constant
          call cmov_l_with_code_a_allregs
          call cmov_l_with_code_b
          call cmov_l_with_code_b_constant
          call cmov_l_with_code_b_allregs
          call cmov_l_with_code_c
          call cmov_l_with_code_c_constant
          call cmov_l_with_code_c_allregs
          call cmov_l_with_code_d
          call cmov_l_with_code_d_constant
          call cmov_l_with_code_d_allregs
          call cmov_l_with_code_e
          call cmov_l_with_code_e_constant
          call cmov_l_with_code_e_allregs
          call cmov_l_with_code_f
          call cmov_l_with_code_f_constant
          call cmov_l_with_code_f_allregs
         .size   main, .-main
