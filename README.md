# hex2dec

## What is it?

It's converter of numbers from HEX to DEC. Usage:
```
 ~ $ ./hex2dec a
10
 ~ $ ./hex2dec f f
15 15
```

## Compilation

There is no need any specific libraries, only C (cross)compiler.
```
 ~ # apt install gcc
 ~ # gcc hex2dec.c -o hex2dec -lm
 ~ # ./hex2dec af cd
838 1706
```
