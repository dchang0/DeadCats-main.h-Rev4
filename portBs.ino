void playPortBsamp(int i){
  timer = micros() + pitch;                                                                         //approx 97.9797979797979 bpm
      for (long o = 0; timer > o; o = micros()){
            PORTB = (PORTB & B11101001) | OutPut(i); //MASK THE PINS WE WANT TO WRITE TO
      }
}

byte OutPut(long i) {
  switch (selector) {

    case 1:
      // Turings Tits Period = 16500
      return  i * (i >> a | i >> b);
      break;

    case 2:
      // Adas nightmare,
      return i * (i >> a | i >> b) & (c * 3) ;
      break;

    case 3:
      // mandelbrots orgy, //seems a little crap, often silent
      return (i >> b + i << c);
      break;

    case 4:
      //long wank, Period = 16500
      return ((i * (i >> b | i >> 9) | (i / 256 + a)&i >> 8)) ^ (i & i >> c | i >> 6);
      break;

    case 5:
      // drunk drum machine,
      return (i * (b / 2) | i >> a) | (i * c & i >> 3);
      break;

    case 6:
      //Serpinskis Anus
      return (i & i >> a | i >> (b / 2));
      break;

    case 7:
      //descent into hell
      //a=5;
      //c=c/2;
      return i % ((i >> a) & (i >> c)) ;
      break;

    case 8:
      //bad core
      return i * ( ((i >> 9) & 10) | ((i >> 11)&a) ^ ((i >> b) & 15 & (i >> c)) );
      break;

    case 9:
      //ROFL
      return i * ((i >> 3 | i >> b) & (a * 3)&i >> 9);
      break;

    case 10:
      //Schrodingers guilt,
      return i * ((i >> a | i >> b)&c & i >> 6);
      break;

    case 11:
      //it is dangerous to go alone,
      return i >> (i | b) >> c >> i;
      break;

    case 12:
      //Pewpewpewpewpewpewpewpewpew
      return i * (i >> a | i >> b) >> (i >> c);
      break;

    case 13:
      //C,O,U, simulation
      return ((i * 2) & (i >> (i >> a))) + ((i * 1) & (i >> c) & 31);
      break;

    case 14:
      //quack
      return ((i >> a | i % b) & (i >> c | i % 19));
      break;

    case 15:
      //???
      return i >> (i | b) >> c >> i;
      break;

    case 16:
      //skynetflix
      return i * (i >> a | i >> b) >> (i >> c);
      break;

    case 17:
      //hate mail
      return i >> a;
      break;

    case 18:
      //Dead Dogs
      return ((i >> 7 - a | (i & i) * 5) | (i & i >> 8) | (i >> b)) | (i * (i >> 8)) | (i >> c - 1) * 3;
      break;

    case 19:
      // Boolean Brutality,
      i = i + 7;
      return  (((i >> 4) | (i % a)) + 3) | (((i % 1000) | (i >> b)) & ((i >> 7) | (i * i % c)));
      break;

    case 20:
      //buttshifter
      return ((((25 * i / 2) / 50) * (((14 * i) / 50) >> a | i >> 9) & ((77 * 46) / 50)&i >> 8)) ^ (i & i >> b | i >> 6);
      break;

    case 21:
      //drunk pooter
      return (i * (i >> (i >> a)) % i) + (i * ( ((i >> 9) & 10) | ((i >> c)&a) * ((i >> a)&b & (i >> 15)) ));
      break;

    case 22:
      ////Bit Banged Yodel,
      return ((1 - (((i + 10) >> ((i >> a) & 15)) & 2)) * 2) * ((((i) >> 10) ^ ((i + b) >> 10)) & 1) * 32 + (((i & 4095 + c) - 2047) * ((i / ((i >> 10 & 3) + 1)) & ((i >> 10 & 7) + 5)) + (i >> (((i >> 12) + 16) & (c + 5)) & 1) * i % 512 * (i % 256 - 128) / 2) / 1024 + 128;

      break;

    default:

      break;
  }
  return 0;


}
