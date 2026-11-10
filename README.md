This is not my creation! This is a copy of Captain Credible's original source code for the generative track main.h on his Dead Cats EP. This is meant to be compiled and uploaded to an ATtiny85-20PU running 16MHz internal clock using Arduino IDE.

If you wish to build this for an ATtiny85V-10PU running at 8MHz internal clock, here is the diff patch. 8MHz is on the left, 16MHz is on the right. Basically, you remove the divide-by-2 in two spots to get 8MHz to behave like 16MHz.

```
diff DEAD_CATS_rev_4_8MHz/TinyTone.ino DEAD_CATS_rev_4_16MHz/TinyTone.ino
21,23c21,23
< tone(Speaker, (notes[pitch]*octaves[i])/oct);
<     } else {
<       tone(Speaker, notes[pitch]/oct);
---
>       tone(Speaker, ((notes[pitch]/2)*octaves[i])/oct);
>     } else {
>       tone(Speaker, (notes[pitch]/2)/oct);
```
