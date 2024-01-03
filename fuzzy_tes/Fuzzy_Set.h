void sets()
{
    FuzzyInput *ph = new FuzzyInput(1);
  ph->addFuzzySet(LN);
  ph->addFuzzySet(FN);
  ph->addFuzzySet(SN);
  ph->addFuzzySet(ZERO01);
  ph->addFuzzySet(sp);
  ph->addFuzzySet(FP);
  ph->addFuzzySet(LP);
  fuzzy->addFuzzyInput(ph);

  // FuzzyInput2
  FuzzyInput *hasilec = new FuzzyInput(2);
  hasilec->addFuzzySet(N6);
  hasilec->addFuzzySet(N5);
  hasilec->addFuzzySet(N4);
  hasilec->addFuzzySet(N3);
  hasilec->addFuzzySet(N2);
  hasilec->addFuzzySet(N1);
  hasilec->addFuzzySet(ZERO02);
  fuzzy->addFuzzyInput(hasilec);

  // FuzzyOutput1(pHDOWN)
  FuzzyOutput *pompa1 = new FuzzyOutput(1);
  pompa1->addFuzzySet(ZERO1);
  pompa1->addFuzzySet(SEBENTAR1);
  pompa1->addFuzzySet(SEDANG1);
  pompa1->addFuzzySet(LAMA1);
  fuzzy->addFuzzyOutput(pompa1);

  // FuzzyOutput2(pHUP)
  FuzzyOutput *pompa2 = new FuzzyOutput(2);
  pompa2->addFuzzySet(ZERO2);
  pompa2->addFuzzySet(SEBENTAR2);
  pompa2->addFuzzySet(SEDANG2);
  pompa2->addFuzzySet(LAMA2);
  fuzzy->addFuzzyOutput(pompa2);

  // FuzzyOutput3(ABMIX)
  FuzzyOutput *pompa3 = new FuzzyOutput(3);
  pompa3->addFuzzySet(ZERO3);
  pompa3->addFuzzySet(SEBENTAR3);
  pompa3->addFuzzySet(SEDANG3);
  pompa3->addFuzzySet(LAMA3);
  fuzzy->addFuzzyOutput(pompa3);
}
