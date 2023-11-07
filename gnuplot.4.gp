# set terminal pngcairo  background "#ffffff" enhanced font "arial,8" fontscale 1.0 size 540, 384 
# set output 'hidden2.2.png'
unset key
set style increment default
set isosamples 25, 25
set hidden3d front offset 1 trianglepattern 3 undefined 1 altdiagonal bentover
set xyplane at 0
set title "Mixing image surface with hidden-line plots" 
set xrange [ * : * ] noreverse writeback
set x2range [ * : * ] noreverse writeback
set yrange [ * : * ] noreverse writeback
set y2range [ * : * ] noreverse writeback
set zrange [ * : * ] noreverse writeback
set cbrange [ 0.00000 : 255.000 ] noreverse nowriteback
set rrange [ * : * ] noreverse writeback
set palette cubehelix start 0.5 cycles -1.5 saturation 1
f(x,y) = sin(-sqrt((x+5)**2+(y-7)**2)*0.5)
## Last datafile plotted: "blutux.rgb"
splot 'blutux.rgb' binary array=(128,128) flip=y format='%uchar%uchar%uchar' origin=(-10,-10,0) dx=0.156 dy=0.156 using ($1+$2+$3)/3 with image, x*x-y*y with lines lc rgb "black"
