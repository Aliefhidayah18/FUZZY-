void rules()
{
   // Building FuzzyRule ////////////////////////////////////////////////////////////////// 1
  FuzzyRuleAntecedent *LN_N6 = new FuzzyRuleAntecedent();
  LN_N6->joinWithAND(LN, N6);

  FuzzyRuleConsequent *LAMA2_LAMA3_1 = new FuzzyRuleConsequent();
  LAMA2_LAMA3_1->addOutput(ZERO1);
  LAMA2_LAMA3_1->addOutput(LAMA2);
  LAMA2_LAMA3_1->addOutput(LAMA3);


  FuzzyRule *fuzzyRule1 = new FuzzyRule(2, LN_N6, LAMA2_LAMA3_1);
  fuzzy->addFuzzyRule(fuzzyRule1);


  // Building FuzzyRule ////////////////////////////////////////////////////////////////// 2
  FuzzyRuleAntecedent *LN_N5 = new FuzzyRuleAntecedent();
  LN_N5->joinWithAND(LN, N5);
  FuzzyRuleConsequent *LAMA2_LAMA3_2 = new FuzzyRuleConsequent();
  LAMA2_LAMA3_2->addOutput(ZERO1);
  LAMA2_LAMA3_2->addOutput(LAMA2);
  LAMA2_LAMA3_2->addOutput(LAMA3);


  FuzzyRule *fuzzyRule2 = new FuzzyRule(2, LN_N5, LAMA2_LAMA3_2);
  fuzzy->addFuzzyRule(fuzzyRule2);

  // Building FuzzyRule ////////////////////////////////////////////////////////////////// 3
  FuzzyRuleAntecedent *LN_N4 = new FuzzyRuleAntecedent();
  LN_N4->joinWithAND(LN, N4);

  FuzzyRuleConsequent *LAMA2_SEDANG3_1 = new FuzzyRuleConsequent();
  LAMA2_SEDANG3_1->addOutput(ZERO1);
  LAMA2_SEDANG3_1->addOutput(LAMA2);
  LAMA2_SEDANG3_1->addOutput(SEDANG3);


  FuzzyRule *fuzzyRule3 = new FuzzyRule(3, LN_N4, LAMA2_SEDANG3_1);
  fuzzy->addFuzzyRule(fuzzyRule3);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 4
  FuzzyRuleAntecedent *LN_N3 = new FuzzyRuleAntecedent();
  LN_N3->joinWithAND(LN, N3);

  FuzzyRuleConsequent *LAMA2_SEDANG3_2 = new FuzzyRuleConsequent();
  LAMA2_SEDANG3_2->addOutput(ZERO1);
  LAMA2_SEDANG3_2->addOutput(LAMA2);
  LAMA2_SEDANG3_2->addOutput(SEDANG3);


  FuzzyRule *fuzzyRule4 = new FuzzyRule(4, LN_N3, LAMA2_SEDANG3_2);
  fuzzy->addFuzzyRule(fuzzyRule4);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 5
  FuzzyRuleAntecedent *LN_N2 = new FuzzyRuleAntecedent();
  LN_N2->joinWithAND(LN, N2);

  FuzzyRuleConsequent *LAMA2_SEBENTAR3_1 = new FuzzyRuleConsequent();
  LAMA2_SEBENTAR3_1->addOutput(LAMA2);
  LAMA2_SEBENTAR3_1->addOutput(SEBENTAR3);
  LAMA2_SEBENTAR3_1->addOutput(ZERO1);

  FuzzyRule *fuzzyRule5 = new FuzzyRule(5, LN_N2, LAMA2_SEBENTAR3_1);
  fuzzy->addFuzzyRule(fuzzyRule5);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 6
  FuzzyRuleAntecedent *LN_N1 = new FuzzyRuleAntecedent();
  LN_N1->joinWithAND(LN, N1);

  FuzzyRuleConsequent *LAMA2_SEBENTAR3_2 = new FuzzyRuleConsequent();
  LAMA2_SEBENTAR3_2->addOutput(ZERO1);
  LAMA2_SEBENTAR3_2->addOutput(LAMA2);
  LAMA2_SEBENTAR3_2->addOutput(SEBENTAR3);


  FuzzyRule *fuzzyRule6 = new FuzzyRule(6, LN_N1, LAMA2_SEBENTAR3_2);
  fuzzy->addFuzzyRule(fuzzyRule6);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 7
  FuzzyRuleAntecedent *LN_ZERO02 = new FuzzyRuleAntecedent();
  LN_ZERO02->joinWithAND(LN, ZERO02);

  FuzzyRuleConsequent *LAMA2_ZERO3 = new FuzzyRuleConsequent();
  LAMA2_ZERO3->addOutput(ZERO1);
  LAMA2_ZERO3->addOutput(LAMA2);
  LAMA2_ZERO3->addOutput(ZERO3);

  FuzzyRule *fuzzyRule7 = new FuzzyRule(7, LN_ZERO02, LAMA2_ZERO3);
  fuzzy->addFuzzyRule(fuzzyRule7);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 8
  FuzzyRuleAntecedent *FN_N6 = new FuzzyRuleAntecedent();
  FN_N6->joinWithAND(FN, N6);

  FuzzyRuleConsequent *SEDANG2_LAMA3_1 = new FuzzyRuleConsequent();
  SEDANG2_LAMA3_1->addOutput(ZERO1);
  SEDANG2_LAMA3_1->addOutput(SEDANG2);
  SEDANG2_LAMA3_1->addOutput(LAMA3);


  FuzzyRule *fuzzyRule8 = new FuzzyRule(8, FN_N6, SEDANG2_LAMA3_1);
  fuzzy->addFuzzyRule(fuzzyRule8);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 9
  FuzzyRuleAntecedent *FN_N5 = new FuzzyRuleAntecedent();
  FN_N5->joinWithAND(FN, N5);

  FuzzyRuleConsequent *SEDANG2_LAMA3_2  = new FuzzyRuleConsequent();
  SEDANG2_LAMA3_2->addOutput(ZERO1);
  SEDANG2_LAMA3_2->addOutput(SEDANG2);
  SEDANG2_LAMA3_2->addOutput(LAMA3);


  FuzzyRule *fuzzyRule9 = new FuzzyRule(9, FN_N5, SEDANG2_LAMA3_2);
  fuzzy->addFuzzyRule(fuzzyRule9);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 10
  FuzzyRuleAntecedent *FN_N4 = new FuzzyRuleAntecedent();
  FN_N5->joinWithAND(FN, N5);

  FuzzyRuleConsequent *SEDANG2_SEDANG3_1 = new FuzzyRuleConsequent();
  SEDANG2_SEDANG3_1->addOutput(ZERO1);
  SEDANG2_SEDANG3_1->addOutput(SEDANG2);
  SEDANG2_SEDANG3_1->addOutput(SEDANG3);


  FuzzyRule *fuzzyRule10 = new FuzzyRule(10, FN_N4, SEDANG2_SEDANG3_1);
  fuzzy->addFuzzyRule(fuzzyRule10);

  // Building FuzzyRule//////////////////////////////////////////////////////////////////11
  FuzzyRuleAntecedent *FN_N3  = new FuzzyRuleAntecedent();
  FN_N3->joinWithAND(FN, N3);

  FuzzyRuleConsequent *SEDANG2_SEDANG3_2 = new FuzzyRuleConsequent();
  SEDANG2_SEDANG3_2->addOutput(ZERO1);
  SEDANG2_SEDANG3_2->addOutput(SEDANG2);
  SEDANG2_SEDANG3_2->addOutput(SEDANG3);


  FuzzyRule *fuzzyRule11 = new FuzzyRule(11, FN_N3, SEDANG2_SEDANG3_2);
  fuzzy->addFuzzyRule(fuzzyRule11);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 12
  FuzzyRuleAntecedent *FN_N2 = new FuzzyRuleAntecedent();
  FN_N2->joinWithAND(FN, N2);

  FuzzyRuleConsequent *SEDANG2_SEBENTAR3_1 = new FuzzyRuleConsequent();
  SEDANG2_SEBENTAR3_1->addOutput(ZERO1);
  SEDANG2_SEBENTAR3_1->addOutput(SEDANG2);
  SEDANG2_SEBENTAR3_1->addOutput(SEBENTAR3);


  FuzzyRule *fuzzyRule12 = new FuzzyRule(12, FN_N2, SEDANG2_SEBENTAR3_1);
  fuzzy->addFuzzyRule(fuzzyRule12);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 13
  FuzzyRuleAntecedent *FN_N1 = new FuzzyRuleAntecedent();
  FN_N1->joinWithAND(FN, N1);

  FuzzyRuleConsequent *SEDANG2_SEBENTAR3_2 = new FuzzyRuleConsequent();
  SEDANG2_SEBENTAR3_2->addOutput(ZERO1);
  SEDANG2_SEBENTAR3_2->addOutput(SEDANG2);
  SEDANG2_SEBENTAR3_2->addOutput(SEBENTAR3);


  FuzzyRule *fuzzyRule13 = new FuzzyRule(13, FN_N1, SEDANG2_SEBENTAR3_2);
  fuzzy->addFuzzyRule(fuzzyRule13);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 14
  FuzzyRuleAntecedent *FN_ZERO02 = new FuzzyRuleAntecedent();
  FN_ZERO02->joinWithAND(FN, ZERO02);

  FuzzyRuleConsequent *SEDANG2_ZERO3 = new FuzzyRuleConsequent();
  SEDANG2_ZERO3->addOutput(SEDANG2);
  SEDANG2_ZERO3->addOutput(ZERO3);
  SEDANG2_ZERO3->addOutput(ZERO1);

  FuzzyRule *fuzzyRule14 = new FuzzyRule(14, FN_ZERO02, SEDANG2_ZERO3);
  fuzzy->addFuzzyRule(fuzzyRule14);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 15
  FuzzyRuleAntecedent *SN_N6 = new FuzzyRuleAntecedent();
  SN_N6->joinWithAND(SN, N6);

  FuzzyRuleConsequent *SEBENTAR2_LAMA3_1 = new FuzzyRuleConsequent();
  SEBENTAR2_LAMA3_1->addOutput(SEBENTAR2);
  SEBENTAR2_LAMA3_1->addOutput(LAMA3);
  SEBENTAR2_LAMA3_1->addOutput(ZERO1);

  FuzzyRule *fuzzyRule15 = new FuzzyRule(15, SN_N6, SEBENTAR2_LAMA3_1);
  fuzzy->addFuzzyRule(fuzzyRule15);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 16
  FuzzyRuleAntecedent *SN_N5 = new FuzzyRuleAntecedent();
  SN_N5->joinWithAND(SN, N5);

  FuzzyRuleConsequent *SEBENTAR2_LAMA3_2 = new FuzzyRuleConsequent();
  SEBENTAR2_LAMA3_2->addOutput(SEBENTAR2);
  SEBENTAR2_LAMA3_2->addOutput(LAMA3);
  SEBENTAR2_LAMA3_2->addOutput(ZERO1);

  FuzzyRule *fuzzyRule16 = new FuzzyRule(16, SN_N5, SEBENTAR2_LAMA3_2);
  fuzzy->addFuzzyRule(fuzzyRule16);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 17
  FuzzyRuleAntecedent *SN_N4 = new FuzzyRuleAntecedent();
  SN_N4->joinWithAND(SN, N4);

  FuzzyRuleConsequent *SEBENTAR2_SEDANG3_1 = new FuzzyRuleConsequent();
  SEBENTAR2_SEDANG3_1->addOutput(SEBENTAR2);
  SEBENTAR2_SEDANG3_1->addOutput(SEBENTAR3);
  SEBENTAR2_SEDANG3_1->addOutput(ZERO1);


  FuzzyRule *fuzzyRule17 = new FuzzyRule(17, SN_N4, SEBENTAR2_SEDANG3_1);
  fuzzy->addFuzzyRule(fuzzyRule17);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 18
  FuzzyRuleAntecedent *SN_N3 = new FuzzyRuleAntecedent();
  SN_N3->joinWithAND(SN, N3);

  FuzzyRuleConsequent *SEBENTAR2_SEDANG3_2 = new FuzzyRuleConsequent();
  SEBENTAR2_SEDANG3_2->addOutput(SEBENTAR2);
  SEBENTAR2_SEDANG3_2->addOutput(SEDANG3);
  SEBENTAR2_SEDANG3_2->addOutput(ZERO1);

  FuzzyRule *fuzzyRule18 = new FuzzyRule(18, SN_N3, SEBENTAR2_SEDANG3_2);
  fuzzy->addFuzzyRule(fuzzyRule18);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 19
  FuzzyRuleAntecedent *SN_N2 = new FuzzyRuleAntecedent();
  SN_N2->joinWithAND(SN, N2);

  FuzzyRuleConsequent *SEBENTAR2_SEBENTAR3_1 = new FuzzyRuleConsequent();
  SEBENTAR2_SEBENTAR3_1->addOutput(SEBENTAR2);
  SEBENTAR2_SEBENTAR3_1->addOutput(SEBENTAR3);
  SEBENTAR2_SEBENTAR3_1->addOutput(ZERO1);

  FuzzyRule *fuzzyRule19 = new FuzzyRule(19, SN_N2, SEBENTAR2_SEBENTAR3_1);
  fuzzy->addFuzzyRule(fuzzyRule19);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 20
  FuzzyRuleAntecedent *SN_N1  = new FuzzyRuleAntecedent();
  SN_N1->joinWithAND(SN, N1);

  FuzzyRuleConsequent *SEBENTAR2_SEBENTAR3_2 = new FuzzyRuleConsequent();
  SEBENTAR2_SEBENTAR3_2->addOutput(SEBENTAR2);
  SEBENTAR2_SEBENTAR3_2->addOutput(SEBENTAR3);
  SEBENTAR2_SEBENTAR3_2->addOutput(ZERO1);

  FuzzyRule *fuzzyRule20 = new FuzzyRule(20, SN_N1, SEBENTAR2_SEBENTAR3_2);
  fuzzy->addFuzzyRule(fuzzyRule20);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 21
  FuzzyRuleAntecedent *SN_ZERO02 = new FuzzyRuleAntecedent();
  SN_ZERO02->joinWithAND(SN, ZERO02);

  FuzzyRuleConsequent *SEBENTAR2_ZERO3 = new FuzzyRuleConsequent();
  SEBENTAR2_ZERO3->addOutput(SEBENTAR2);
  SEBENTAR2_ZERO3->addOutput(ZERO3);
  SEBENTAR2_ZERO3->addOutput(ZERO1);

  FuzzyRule *fuzzyRule21 = new FuzzyRule(21, SN_ZERO02, SEBENTAR2_ZERO3);
  fuzzy->addFuzzyRule(fuzzyRule21);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 22
  FuzzyRuleAntecedent *ZERO01_N6 = new FuzzyRuleAntecedent();
  ZERO01_N6->joinWithAND(ZERO01, N6);

  FuzzyRuleConsequent *ZERO2_LAMA3_1 = new FuzzyRuleConsequent();
  ZERO2_LAMA3_1->addOutput(ZERO2);
  ZERO2_LAMA3_1->addOutput(LAMA3);
  ZERO2_LAMA3_1->addOutput(ZERO1);

  FuzzyRule *fuzzyRule22 = new FuzzyRule(22, ZERO01_N6, ZERO2_LAMA3_1);
  fuzzy->addFuzzyRule(fuzzyRule22);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 23
  FuzzyRuleAntecedent *ZERO01_N5 = new FuzzyRuleAntecedent();
  ZERO01_N5->joinWithAND(ZERO01, N5);

  FuzzyRuleConsequent *ZERO2_LAMA3_2 = new FuzzyRuleConsequent();
  ZERO2_LAMA3_2->addOutput(ZERO2);
  ZERO2_LAMA3_2->addOutput(LAMA3);
  ZERO2_LAMA3_2->addOutput(ZERO1);

  FuzzyRule *fuzzyRule23 = new FuzzyRule(23, ZERO01_N5, ZERO2_LAMA3_2);
  fuzzy->addFuzzyRule(fuzzyRule23);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 24
  FuzzyRuleAntecedent *ZERO01_N4 = new FuzzyRuleAntecedent();
  ZERO01_N4->joinWithAND(ZERO01, N4);

  FuzzyRuleConsequent *ZERO2_SEDANG3_1 = new FuzzyRuleConsequent();
  ZERO2_SEDANG3_1->addOutput(ZERO2);
  ZERO2_SEDANG3_1->addOutput(SEDANG3);
  ZERO2_SEDANG3_1->addOutput(ZERO1);

  FuzzyRule *fuzzyRule24 = new FuzzyRule(24, ZERO01_N4, ZERO2_SEDANG3_1);
  fuzzy->addFuzzyRule(fuzzyRule24);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 25
  FuzzyRuleAntecedent *ZERO01_N3 = new FuzzyRuleAntecedent();
  ZERO01_N3->joinWithAND(ZERO01, N5);

  FuzzyRuleConsequent *ZERO2_SEDANG3_2 = new FuzzyRuleConsequent();
  ZERO2_SEDANG3_2->addOutput(ZERO2);
  ZERO2_SEDANG3_2->addOutput(SEDANG3);
  ZERO2_SEDANG3_2->addOutput(ZERO1);

  FuzzyRule *fuzzyRule25 = new FuzzyRule(25, ZERO01_N3, ZERO2_SEDANG3_2);
  fuzzy->addFuzzyRule(fuzzyRule25);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 26
  FuzzyRuleAntecedent *ZERO01_N2 = new FuzzyRuleAntecedent();
  ZERO01_N2->joinWithAND(ZERO01, N2);

  FuzzyRuleConsequent *ZERO2_SEBENTAR3_1 = new FuzzyRuleConsequent();
  ZERO2_SEBENTAR3_1->addOutput(ZERO2);
  ZERO2_SEBENTAR3_1->addOutput(SEBENTAR3);
  ZERO2_SEBENTAR3_1->addOutput(ZERO1);

  FuzzyRule *fuzzyRule26 = new FuzzyRule(26, ZERO01_N2, ZERO2_SEBENTAR3_1);
  fuzzy->addFuzzyRule(fuzzyRule26);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 27
  FuzzyRuleAntecedent *ZERO01_N1 = new FuzzyRuleAntecedent();
  ZERO01_N1->joinWithAND(ZERO01, N1);

  FuzzyRuleConsequent *ZERO2_SEBENTAR3_2 = new FuzzyRuleConsequent();
  ZERO2_SEBENTAR3_2->addOutput(ZERO2);
  ZERO2_SEBENTAR3_2->addOutput(SEBENTAR3);
  ZERO2_SEBENTAR3_2->addOutput(ZERO1);

  FuzzyRule *fuzzyRule27 = new FuzzyRule(27, ZERO01_N1, ZERO2_SEBENTAR3_2);
  fuzzy->addFuzzyRule(fuzzyRule27);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 28
  FuzzyRuleAntecedent *ZERO01_ZERO02 = new FuzzyRuleAntecedent();
  ZERO01_ZERO02->joinWithAND(ZERO01, ZERO02);

  FuzzyRuleConsequent *ZERO2_ZERO3 = new FuzzyRuleConsequent();
  ZERO2_ZERO3->addOutput(ZERO2);
  ZERO2_ZERO3->addOutput(ZERO3);
  ZERO2_ZERO3->addOutput(ZERO1);

  FuzzyRule *fuzzyRule28 = new FuzzyRule(28, ZERO01_ZERO02, ZERO2_ZERO3);
  fuzzy->addFuzzyRule(fuzzyRule28);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 29
  FuzzyRuleAntecedent *SP_N6 = new FuzzyRuleAntecedent();
  SP_N6->joinWithAND(sp, N6);

  FuzzyRuleConsequent *SEBENTAR1_LAMA3_1 = new FuzzyRuleConsequent();
  SEBENTAR1_LAMA3_1->addOutput(SEBENTAR1);
  SEBENTAR1_LAMA3_1->addOutput(ZERO3);
  SEBENTAR1_LAMA3_1->addOutput(ZERO2);

  FuzzyRule *fuzzyRule29 = new FuzzyRule(29, SP_N6, SEBENTAR1_LAMA3_1);
  fuzzy->addFuzzyRule(fuzzyRule29);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 30
  FuzzyRuleAntecedent *SP_N5 = new FuzzyRuleAntecedent();
  SP_N5->joinWithAND(sp, N5);

  FuzzyRuleConsequent *SEBENTAR1_LAMA3_2 = new FuzzyRuleConsequent();
  SEBENTAR1_LAMA3_2->addOutput(SEBENTAR1);
  SEBENTAR1_LAMA3_2->addOutput(LAMA3);
  SEBENTAR1_LAMA3_2->addOutput(ZERO2);

  FuzzyRule *fuzzyRule30 = new FuzzyRule(30, SP_N5, SEBENTAR1_LAMA3_2);
  fuzzy->addFuzzyRule(fuzzyRule30);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 31
  FuzzyRuleAntecedent *SP_N4 = new FuzzyRuleAntecedent();
  SP_N4->joinWithAND(sp, N4);

  FuzzyRuleConsequent *SEBENTAR1_SEDANG3_1 = new FuzzyRuleConsequent();
  SEBENTAR1_SEDANG3_1->addOutput(SEBENTAR1);
  SEBENTAR1_SEDANG3_1->addOutput(SEDANG3);
  SEBENTAR1_SEDANG3_1->addOutput(ZERO2);

  FuzzyRule *fuzzyRule31 = new FuzzyRule(31, SP_N4, SEBENTAR1_SEDANG3_1);
  fuzzy->addFuzzyRule(fuzzyRule31);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 32
  FuzzyRuleAntecedent *SP_N3 = new FuzzyRuleAntecedent();
  SP_N3->joinWithAND(sp, N3);

  FuzzyRuleConsequent *SEBENTAR1_SEDANG3_2 = new FuzzyRuleConsequent();
  SEBENTAR1_SEDANG3_2->addOutput(SEBENTAR1);
  SEBENTAR1_SEDANG3_2->addOutput(SEDANG3);
  SEBENTAR1_SEDANG3_2->addOutput(ZERO2);

  FuzzyRule *fuzzyRule32 = new FuzzyRule(32, SP_N3, SEBENTAR1_SEDANG3_2);
  fuzzy->addFuzzyRule(fuzzyRule32);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 33
  FuzzyRuleAntecedent *SP_N2 = new FuzzyRuleAntecedent();
  SP_N2->joinWithAND(sp, N2);

  FuzzyRuleConsequent *SEBENTAR1_SEBENTAR3_1 = new FuzzyRuleConsequent();
  SEBENTAR1_SEBENTAR3_1->addOutput(SEBENTAR1);
  SEBENTAR1_SEBENTAR3_1->addOutput(SEBENTAR3);
  SEBENTAR1_SEBENTAR3_1->addOutput(ZERO2);

  FuzzyRule *fuzzyRule33 = new FuzzyRule(33, SP_N2, SEBENTAR1_SEBENTAR3_1);
  fuzzy->addFuzzyRule(fuzzyRule33);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 34
  FuzzyRuleAntecedent *SP_N1 = new FuzzyRuleAntecedent();
  SP_N1->joinWithAND(sp, N1);

  FuzzyRuleConsequent *SEBENTAR1_SEBENTAR3_2 = new FuzzyRuleConsequent();
  SEBENTAR1_SEBENTAR3_2->addOutput(SEBENTAR1);
  SEBENTAR1_SEBENTAR3_2->addOutput(SEBENTAR3);
  SEBENTAR1_SEBENTAR3_2->addOutput(ZERO2);

  FuzzyRule *fuzzyRule34 = new FuzzyRule(34, SP_N1, SEBENTAR1_SEBENTAR3_2);
  fuzzy->addFuzzyRule(fuzzyRule34);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 35
  FuzzyRuleAntecedent *SP_ZERO02 = new FuzzyRuleAntecedent();
  SP_ZERO02->joinWithAND(sp, ZERO02);

  FuzzyRuleConsequent *SEBENTAR1_ZERO3 = new FuzzyRuleConsequent();
  SEBENTAR1_ZERO3->addOutput(SEBENTAR1);
  SEBENTAR1_ZERO3->addOutput(ZERO3);
  SEBENTAR1_ZERO3->addOutput(ZERO2);

  FuzzyRule *fuzzyRule35 = new FuzzyRule(35, SP_ZERO02, SEBENTAR1_ZERO3);
  fuzzy->addFuzzyRule(fuzzyRule35);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 36
  FuzzyRuleAntecedent *FP_N6 = new FuzzyRuleAntecedent();
  FP_N6->joinWithAND(FP, N6);

  FuzzyRuleConsequent *SEDANG1_LAMA3_1 = new FuzzyRuleConsequent();
  SEDANG1_LAMA3_1->addOutput(SEDANG1);
  SEDANG1_LAMA3_1->addOutput(LAMA3);
  SEDANG1_LAMA3_1->addOutput(ZERO2);

  FuzzyRule *fuzzyRule36 = new FuzzyRule(36, FP_N6, SEDANG1_LAMA3_1);
  fuzzy->addFuzzyRule(fuzzyRule36);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 37
  FuzzyRuleAntecedent *FP_N5 = new FuzzyRuleAntecedent();
  FP_N5->joinWithAND(FP, N5);

  FuzzyRuleConsequent *SEDANG1_LAMA3_2 = new FuzzyRuleConsequent();
  SEDANG1_LAMA3_2->addOutput(SEDANG1);
  SEDANG1_LAMA3_2->addOutput(LAMA3);
  SEDANG1_LAMA3_2->addOutput(ZERO2);

  FuzzyRule *fuzzyRule37 = new FuzzyRule(37, FP_N5, SEDANG1_LAMA3_2);
  fuzzy->addFuzzyRule(fuzzyRule37);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 38
  FuzzyRuleAntecedent *FP_N4 = new FuzzyRuleAntecedent();
  FP_N4->joinWithAND(FP, N4);

  FuzzyRuleConsequent *SEDANG1_SEDANG3_1 = new FuzzyRuleConsequent();
  SEDANG1_SEDANG3_1->addOutput(SEDANG1);
  SEDANG1_SEDANG3_1->addOutput(SEDANG3);
  SEDANG1_SEDANG3_1->addOutput(ZERO2);

  FuzzyRule *fuzzyRule38 = new FuzzyRule(38, FP_N4, SEDANG1_SEDANG3_1);
  fuzzy->addFuzzyRule(fuzzyRule38);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 39
  FuzzyRuleAntecedent *FP_N3 = new FuzzyRuleAntecedent();
  FP_N3->joinWithAND(FP, N3);

  FuzzyRuleConsequent *SEDANG1_SEDANG3_2 = new FuzzyRuleConsequent();
  SEDANG1_SEDANG3_2->addOutput(SEDANG1);
  SEDANG1_SEDANG3_2->addOutput(SEDANG3);
  SEDANG1_SEDANG3_2->addOutput(ZERO2);

  FuzzyRule *fuzzyRule39 = new FuzzyRule(39, FP_N3, SEDANG1_SEDANG3_2);
  fuzzy->addFuzzyRule(fuzzyRule39);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 40
  FuzzyRuleAntecedent *FP_N2 = new FuzzyRuleAntecedent();
  FP_N2->joinWithAND(FP, N2);

  FuzzyRuleConsequent *SEDANG1_SEBENTAR3_1 = new FuzzyRuleConsequent();
  SEDANG1_SEBENTAR3_1->addOutput(SEDANG1);
  SEDANG1_SEBENTAR3_1->addOutput(SEBENTAR3);
  SEDANG1_SEBENTAR3_1->addOutput(ZERO2);

  FuzzyRule *fuzzyRule40 = new FuzzyRule(40, FP_N2, SEDANG1_SEBENTAR3_1);
  fuzzy->addFuzzyRule(fuzzyRule40);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 41
  FuzzyRuleAntecedent *FP_N1 = new FuzzyRuleAntecedent();
  FP_N1->joinWithAND(FP, N1);

  FuzzyRuleConsequent *SEDANG1_SEBENTAR3_2 = new FuzzyRuleConsequent();
  SEDANG1_SEDANG3_2->addOutput(SEDANG1);
  SEDANG1_SEDANG3_2->addOutput(SEBENTAR3);
  SEDANG1_SEDANG3_2->addOutput(ZERO2);

  FuzzyRule *fuzzyRule41 = new FuzzyRule(41, FP_N1, SEDANG1_SEBENTAR3_2);
  fuzzy->addFuzzyRule(fuzzyRule41);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 42
  FuzzyRuleAntecedent *FP_ZERO02 = new FuzzyRuleAntecedent();
  FP_ZERO02->joinWithAND(FP, ZERO02);

  FuzzyRuleConsequent *SEDANG1_ZERO3 = new FuzzyRuleConsequent();
  SEDANG1_ZERO3->addOutput(SEDANG1);
  SEDANG1_ZERO3->addOutput(ZERO3);
  SEDANG1_ZERO3->addOutput(ZERO2);

  FuzzyRule *fuzzyRule42 = new FuzzyRule(42, FP_ZERO02, SEDANG1_ZERO3);
  fuzzy->addFuzzyRule(fuzzyRule42);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 43
  FuzzyRuleAntecedent *LP_N6 = new FuzzyRuleAntecedent();
  LP_N6->joinWithAND(LP, N6);

  FuzzyRuleConsequent *LAMA1_LAMA3_1 = new FuzzyRuleConsequent();
  LAMA1_LAMA3_1->addOutput(LAMA1);
  LAMA1_LAMA3_1->addOutput(LAMA3);
  LAMA1_LAMA3_1->addOutput(ZERO2);

  FuzzyRule *fuzzyRule43 = new FuzzyRule(43, LP_N6, LAMA1_LAMA3_1);
  fuzzy->addFuzzyRule(fuzzyRule43);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 44
  FuzzyRuleAntecedent *LP_N5 = new FuzzyRuleAntecedent();
  LP_N5->joinWithAND(LP, N5);

  FuzzyRuleConsequent *LAMA1_LAMA3_2 = new FuzzyRuleConsequent();
  LAMA1_LAMA3_2->addOutput(LAMA1);
  LAMA1_LAMA3_2->addOutput(LAMA3);
  LAMA1_LAMA3_2->addOutput(ZERO2);

  FuzzyRule *fuzzyRule44 = new FuzzyRule(44, LP_N5, LAMA1_LAMA3_2);
  fuzzy->addFuzzyRule(fuzzyRule44);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 45
  FuzzyRuleAntecedent *LP_N4 = new FuzzyRuleAntecedent();
  LP_N4->joinWithAND(LP, N4);

  FuzzyRuleConsequent *LAMA1_SEDANG3_1 = new FuzzyRuleConsequent();
  LAMA1_SEDANG3_1->addOutput(LAMA1);
  LAMA1_SEDANG3_1->addOutput(SEDANG3);
  LAMA1_SEDANG3_1->addOutput(ZERO2);

  FuzzyRule *fuzzyRule45 = new FuzzyRule(45, LP_N4, LAMA1_SEDANG3_1);
  fuzzy->addFuzzyRule(fuzzyRule45);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 46
  FuzzyRuleAntecedent *LP_N3 = new FuzzyRuleAntecedent();
  LP_N3->joinWithAND(LP, N3);

  FuzzyRuleConsequent *LAMA1_SEDANG3_2 = new FuzzyRuleConsequent();
  LAMA1_SEDANG3_2->addOutput(LAMA1);
  LAMA1_SEDANG3_2->addOutput(SEDANG3);
  LAMA1_SEDANG3_2->addOutput(ZERO2);

  FuzzyRule *fuzzyRule46 = new FuzzyRule(46, LP_N3, LAMA1_SEDANG3_2);
  fuzzy->addFuzzyRule(fuzzyRule46);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 47
  FuzzyRuleAntecedent *LP_N2 = new FuzzyRuleAntecedent();
  LP_N2->joinWithAND(LP, N2);

  FuzzyRuleConsequent *LAMA1_SEBENTAR3_1 = new FuzzyRuleConsequent();
  LAMA1_SEBENTAR3_1->addOutput(LAMA1);
  LAMA1_SEBENTAR3_1->addOutput(SEBENTAR3);
  LAMA1_SEBENTAR3_1->addOutput(ZERO2);

  FuzzyRule *fuzzyRule47 = new FuzzyRule(47, LP_N2, LAMA1_SEBENTAR3_1);
  fuzzy->addFuzzyRule(fuzzyRule47);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 48
  FuzzyRuleAntecedent *LP_N1 = new FuzzyRuleAntecedent();
  LP_N1->joinWithAND(LP, N1);

  FuzzyRuleConsequent *LAMA1_SEBENTAR3_2 = new FuzzyRuleConsequent();
  LAMA1_SEBENTAR3_2->addOutput(LAMA1);
  LAMA1_SEBENTAR3_2->addOutput(SEBENTAR3);
  LAMA1_SEBENTAR3_2->addOutput(ZERO2);

  FuzzyRule *fuzzyRule48 = new FuzzyRule(48, LP_N1, LAMA1_SEBENTAR3_2);
  fuzzy->addFuzzyRule(fuzzyRule48);

  // Building FuzzyRule////////////////////////////////////////////////////////////////// 49
  FuzzyRuleAntecedent *LP_ZERO02 = new FuzzyRuleAntecedent();
  LP_ZERO02->joinWithAND(LP, ZERO02);

  FuzzyRuleConsequent *LAMA1_ZERO3 = new FuzzyRuleConsequent();
  LAMA1_ZERO3->addOutput(LAMA1);
  LAMA1_ZERO3->addOutput(ZERO3);
  LAMA1_ZERO3->addOutput(ZERO2);

  FuzzyRule *fuzzyRule49 = new FuzzyRule(49, LP_ZERO02, LAMA1_ZERO3);
  fuzzy->addFuzzyRule(fuzzyRule49);
}
