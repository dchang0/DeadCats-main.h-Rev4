void playMelodic(int reps) {


  for (int i = 0; i < reps; i++) {                                                //repeat number of reps
    for (int i = 0; i < 2; i++) {                                            //repeat this subpart twice
      playMelody(4, 0, startStep);                                           //play stored melody 4 times, not transposed, move the start step if we portBd
      portB(random(0, 6), 1);                                                //portB break
      modifyMelody();                                                        //change one note in the melody
      playMelody(4, transposeAmount, startStep);                             //play the melody 4 times transposed
      portB(random (0, 6), 1);                                               // portB break
      gener8SDbeat();                                                          //make a new SD beat


    }
    gener8BDbeat();                                                           // make a new BD break
  refreshrandom();
  switch (random(0, 3)) {
    case 1:
      portB(Reps, 2);
      break;
    case 2:
      transposeAmount = random(-8, 8);
      break;
      case 3:
      portB(Reps*2,1);
      break;

  }  
  }
  



}

