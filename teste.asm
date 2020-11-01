org 100h

mov ch,1eh; dia 30
mov cl,0ch; mes 12
mov di,07e4h; ano 2020

mov bh,16h; dia 22
mov bl,06h; mes 06
mov si,07bah; ano 1978

mov ax,0016dh; 365 dias no ano
mul di;
mov di,ax; armazenando os anos
mov ax,1eh; 30 dias no mes
mul cl;
add al,ch; somando os dias
adc ah,0;
mov cx,dx; guardando a parte mais significativa em cx
mov di,ax; guardando a parte menos significativa em di
xor dx,dx; zera dx

mov ax,0016dh; 365 dias no ano
mul si;
mov si,ax; armazenando anos
mov ax,1eh; 30 dias no mes
mul bl;
add al,bh; somando os dias
adc ah,0;
add ax,si; somando os anos
adc dx,0;

sub cx,dx; subtraindo a parte mais sigificativa
sub di,ax; subtraindo a parte menos significativa
sbb cx,0;

mov dx,cx; movendo a parte mais significativa para dx
mov ax,di; movendo a parte menos significativa para ax
xor di,di;  
xor si,si;
xor bx,bx;
xor cx,cx;


int 20;



