#include "../defines.h"

// volatile uint8_t *FLAGS_PE1 = (uint8_t *)(PE1);
// volatile UINT *ADDR_PE1_WM_STREAM = (volatile UINT *)(PE1 + 1);
// volatile UINT *ADDR_WM_PE1_STREAM = (volatile UINT *)(PE1 + 9);
// volatile UINT *ADDR_PE1_BS = (volatile UINT *)(PE1 + 17);

// volatile uint8_t *FLAGS_PE2 = (uint8_t *)(PE2);
// volatile UINT *ADDR_PE2_WM_STREAM = (volatile UINT *)(PE2 + 1);
// volatile UINT *ADDR_WM_PE2_STREAM = (volatile UINT *)(PE2 + 9);
// volatile UINT *ADDR_PE2_BS = (volatile UINT *)(PE2 + 17);

// volatile uint8_t *FLAGS_PE3 = (uint8_t *)(PE3);
// volatile UINT *ADDR_PE3_WM_STREAM = (volatile UINT *)(PE3 + 1);
// volatile UINT *ADDR_WM_PE3_STREAM = (volatile UINT *)(PE3 + 9);
// volatile UINT *ADDR_PE3_BS = (volatile UINT *)(PE3 + 17);

// volatile uint8_t *FLAGS_PE4 = (uint8_t *)(PE4);
// volatile UINT *ADDR_PE4_WM_STREAM = (volatile UINT *)(PE4 + 1);
// volatile UINT *ADDR_WM_PE4_STREAM = (volatile UINT *)(PE4 + 9);
// volatile UINT *ADDR_PE4_BS = (volatile UINT *)(PE4 + 17);

// volatile uint8_t *FLAGS_PE5 = (uint8_t *)(PE5);
// volatile UINT *ADDR_PE5_WM_STREAM = (volatile UINT *)(PE5 + 1);
// volatile UINT *ADDR_WM_PE5_STREAM = (volatile UINT *)(PE5 + 9);
// volatile UINT *ADDR_PE5_BS = (volatile UINT *)(PE5 + 17);

// volatile uint8_t *FLAGS_PE6 = (uint8_t *)(PE6);
// volatile UINT *ADDR_PE6_WM_STREAM = (volatile UINT *)(PE6 + 1);
// volatile UINT *ADDR_WM_PE6_STREAM = (volatile UINT *)(PE6 + 9);
// volatile UINT *ADDR_PE6_BS = (volatile UINT *)(PE6 + 17);

// volatile uint8_t *FLAGS_PE7 = (uint8_t *)(PE7);
// volatile UINT *ADDR_PE7_WM_STREAM = (volatile UINT *)(PE7 + 1);
// volatile UINT *ADDR_WM_PE7_STREAM = (volatile UINT *)(PE7 + 9);
// volatile UINT *ADDR_PE7_BS = (volatile UINT *)(PE7 + 17);

// volatile uint8_t *FLAGS_PE8 = (uint8_t *)(PE8);
// volatile UINT *ADDR_PE8_WM_STREAM = (volatile UINT *)(PE8 + 1);
// volatile UINT *ADDR_WM_PE8_STREAM = (volatile UINT *)(PE8 + 9);
// volatile UINT *ADDR_PE8_BS = (volatile UINT *)(PE8 + 17);

// volatile uint8_t *FLAGS_PE9 = (uint8_t *)(PE9);
// volatile UINT *ADDR_PE9_WM_STREAM = (volatile UINT *)(PE9 + 1);
// volatile UINT *ADDR_WM_PE9_STREAM = (volatile UINT *)(PE9 + 9);
// volatile UINT *ADDR_PE9_BS = (volatile UINT *)(PE9 + 17);

// volatile uint8_t *FLAGS_PE10 = (uint8_t *)(PE10);
// volatile UINT *ADDR_PE10_WM_STREAM = (volatile UINT *)(PE10 + 1);
// volatile UINT *ADDR_WM_PE10_STREAM = (volatile UINT *)(PE10 + 9);
// volatile UINT *ADDR_PE10_BS = (volatile UINT *)(PE10 + 17);

// volatile uint8_t *FLAGS_PE11 = (uint8_t *)(PE11);
// volatile UINT *ADDR_PE11_WM_STREAM = (volatile UINT *)(PE11 + 1);
// volatile UINT *ADDR_WM_PE11_STREAM = (volatile UINT *)(PE11 + 9);
// volatile UINT *ADDR_PE11_BS = (volatile UINT *)(PE11 + 17);

// volatile uint8_t *FLAGS_PE12 = (uint8_t *)(PE12);
// volatile UINT *ADDR_PE12_WM_STREAM = (volatile UINT *)(PE12 + 1);
// volatile UINT *ADDR_WM_PE12_STREAM = (volatile UINT *)(PE12 + 9);
// volatile UINT *ADDR_PE12_BS = (volatile UINT *)(PE12 + 17);

// volatile uint8_t *FLAGS_PE13 = (uint8_t *)(PE13);
// volatile UINT *ADDR_PE13_WM_STREAM = (volatile UINT *)(PE13 + 1);
// volatile UINT *ADDR_WM_PE13_STREAM = (volatile UINT *)(PE13 + 9);
// volatile UINT *ADDR_PE13_BS = (volatile UINT *)(PE13 + 17);

// volatile uint8_t *FLAGS_PE14 = (uint8_t *)(PE14);
// volatile UINT *ADDR_PE14_WM_STREAM = (volatile UINT *)(PE14 + 1);
// volatile UINT *ADDR_WM_PE14_STREAM = (volatile UINT *)(PE14 + 9);
// volatile UINT *ADDR_PE14_BS = (volatile UINT *)(PE14 + 17);

// volatile uint8_t *FLAGS_PE15 = (uint8_t *)(PE15);
// volatile UINT *ADDR_PE15_WM_STREAM = (volatile UINT *)(PE15 + 1);
// volatile UINT *ADDR_WM_PE15_STREAM = (volatile UINT *)(PE15 + 9);
// volatile UINT *ADDR_PE15_BS = (volatile UINT *)(PE15 + 17);

// volatile uint8_t *FLAGS_PE16 = (uint8_t *)(PE16);
// volatile UINT *ADDR_PE16_WM_STREAM = (volatile UINT *)(PE16 + 1);
// volatile UINT *ADDR_WM_PE16_STREAM = (volatile UINT *)(PE16 + 9);
// volatile UINT *ADDR_PE16_BS = (volatile UINT *)(PE16 + 17);

volatile uint8_t *FLAGS_CALC1 = (uint8_t *)(CALC1);
volatile UINT *ADDR_WM_CALC1_STREAM = (volatile UINT *)(CALC1 + 1);
volatile UINT *ADDR_CALC1_WM_STREAM = (volatile UINT *)(CALC1 + 9);
volatile UINT *ADDR_CALC1_BS = (volatile UINT *)(CALC1 + 17);

volatile uint8_t *FLAGS_CALC2 = (uint8_t *)(CALC2);
volatile UINT *ADDR_WM_CALC2_STREAM = (volatile UINT *)(CALC2 + 1);
volatile UINT *ADDR_CALC2_WM_STREAM = (volatile UINT *)(CALC2 + 9);
volatile UINT *ADDR_CALC2_BS = (volatile UINT *)(CALC2 + 17);

volatile uint8_t *FLAGS_CALC3 = (uint8_t *)(CALC3);
volatile UINT *ADDR_WM_CALC3_STREAM = (volatile UINT *)(CALC3 + 1);
volatile UINT *ADDR_CALC3_WM_STREAM = (volatile UINT *)(CALC3 + 9);
volatile UINT *ADDR_CALC3_BS = (volatile UINT *)(CALC3 + 17);

volatile uint8_t *FLAGS_CALC4 = (uint8_t *)(CALC4);
volatile UINT *ADDR_WM_CALC4_STREAM = (volatile UINT *)(CALC4 + 1);
volatile UINT *ADDR_CALC4_WM_STREAM = (volatile UINT *)(CALC4 + 9);
volatile UINT *ADDR_CALC4_BS = (volatile UINT *)(CALC4 + 17);

volatile uint8_t *FLAGS_CALC5 = (uint8_t *)(CALC5);
volatile UINT *ADDR_WM_CALC5_STREAM = (volatile UINT *)(CALC5 + 1);
volatile UINT *ADDR_CALC5_WM_STREAM = (volatile UINT *)(CALC5 + 9);
volatile UINT *ADDR_CALC5_BS = (volatile UINT *)(CALC5 + 17);

volatile uint8_t *FLAGS_CALC6 = (uint8_t *)(CALC6);
volatile UINT *ADDR_WM_CALC6_STREAM = (volatile UINT *)(CALC6 + 1);
volatile UINT *ADDR_CALC6_WM_STREAM = (volatile UINT *)(CALC6 + 9);
volatile UINT *ADDR_CALC6_BS = (volatile UINT *)(CALC6 + 17);

volatile uint8_t *FLAGS_CALC7 = (uint8_t *)(CALC7);
volatile UINT *ADDR_WM_CALC7_STREAM = (volatile UINT *)(CALC7 + 1);
volatile UINT *ADDR_CALC7_WM_STREAM = (volatile UINT *)(CALC7 + 9);
volatile UINT *ADDR_CALC7_BS = (volatile UINT *)(CALC7 + 17);

volatile uint8_t *FLAGS_CALC8 = (uint8_t *)(CALC8);
volatile UINT *ADDR_WM_CALC8_STREAM = (volatile UINT *)(CALC8 + 1);
volatile UINT *ADDR_CALC8_WM_STREAM = (volatile UINT *)(CALC8 + 9);
volatile UINT *ADDR_CALC8_BS = (volatile UINT *)(CALC8 + 17);

volatile uint8_t *FLAGS_CALC9 = (uint8_t *)(CALC9);
volatile UINT *ADDR_WM_CALC9_STREAM = (volatile UINT *)(CALC9 + 1);
volatile UINT *ADDR_CALC9_WM_STREAM = (volatile UINT *)(CALC9 + 9);
volatile UINT *ADDR_CALC9_BS = (volatile UINT *)(CALC9 + 17);

volatile uint8_t *FLAGS_CALC10 = (uint8_t *)(CALC10);
volatile UINT *ADDR_WM_CALC10_STREAM = (volatile UINT *)(CALC10 + 1);
volatile UINT *ADDR_CALC10_WM_STREAM = (volatile UINT *)(CALC10 + 9);
volatile UINT *ADDR_CALC10_BS = (volatile UINT *)(CALC10 + 17);

volatile uint8_t *FLAGS_CALC11 = (uint8_t *)(CALC11);
volatile UINT *ADDR_WM_CALC11_STREAM = (volatile UINT *)(CALC11 + 1);
volatile UINT *ADDR_CALC11_WM_STREAM = (volatile UINT *)(CALC11 + 9);
volatile UINT *ADDR_CALC11_BS = (volatile UINT *)(CALC11 + 17);

volatile uint8_t *FLAGS_CALC12 = (uint8_t *)(CALC12);
volatile UINT *ADDR_WM_CALC12_STREAM = (volatile UINT *)(CALC12 + 1);
volatile UINT *ADDR_CALC12_WM_STREAM = (volatile UINT *)(CALC12 + 9);
volatile UINT *ADDR_CALC12_BS = (volatile UINT *)(CALC12 + 17);

volatile uint8_t *FLAGS_CALC13 = (uint8_t *)(CALC13);
volatile UINT *ADDR_WM_CALC13_STREAM = (volatile UINT *)(CALC13 + 1);
volatile UINT *ADDR_CALC13_WM_STREAM = (volatile UINT *)(CALC13 + 9);
volatile UINT *ADDR_CALC13_BS = (volatile UINT *)(CALC13 + 17);

volatile uint8_t *FLAGS_CALC14 = (uint8_t *)(CALC14);
volatile UINT *ADDR_WM_CALC14_STREAM = (volatile UINT *)(CALC14 + 1);
volatile UINT *ADDR_CALC14_WM_STREAM = (volatile UINT *)(CALC14 + 9);
volatile UINT *ADDR_CALC14_BS = (volatile UINT *)(CALC14 + 17);

volatile uint8_t *FLAGS_CALC15 = (uint8_t *)(CALC15);
volatile UINT *ADDR_WM_CALC15_STREAM = (volatile UINT *)(CALC15 + 1);
volatile UINT *ADDR_CALC15_WM_STREAM = (volatile UINT *)(CALC15 + 9);
volatile UINT *ADDR_CALC15_BS = (volatile UINT *)(CALC15 + 17);

volatile uint8_t *FLAGS_CALC16 = (uint8_t *)(CALC16);
volatile UINT *ADDR_WM_CALC16_STREAM = (volatile UINT *)(CALC16 + 1);
volatile UINT *ADDR_CALC16_WM_STREAM = (volatile UINT *)(CALC16 + 9);
volatile UINT *ADDR_CALC16_BS = (volatile UINT *)(CALC16 + 17);

volatile uint8_t *FLAGS_CALC17 = (uint8_t *)(CALC17);
volatile UINT *ADDR_WM_CALC17_STREAM = (volatile UINT *)(CALC17 + 1);
volatile UINT *ADDR_CALC17_WM_STREAM = (volatile UINT *)(CALC17 + 9);
volatile UINT *ADDR_CALC17_BS = (volatile UINT *)(CALC17 + 17);

volatile uint8_t *FLAGS_CALC18 = (uint8_t *)(CALC18);
volatile UINT *ADDR_WM_CALC18_STREAM = (volatile UINT *)(CALC18 + 1);
volatile UINT *ADDR_CALC18_WM_STREAM = (volatile UINT *)(CALC18 + 9);
volatile UINT *ADDR_CALC18_BS = (volatile UINT *)(CALC18 + 17);

volatile uint8_t *FLAGS_CALC19 = (uint8_t *)(CALC19);
volatile UINT *ADDR_WM_CALC19_STREAM = (volatile UINT *)(CALC19 + 1);
volatile UINT *ADDR_CALC19_WM_STREAM = (volatile UINT *)(CALC19 + 9);
volatile UINT *ADDR_CALC19_BS = (volatile UINT *)(CALC19 + 17);

volatile uint8_t *FLAGS_CALC20 = (uint8_t *)(CALC20);
volatile UINT *ADDR_WM_CALC20_STREAM = (volatile UINT *)(CALC20 + 1);
volatile UINT *ADDR_CALC20_WM_STREAM = (volatile UINT *)(CALC20 + 9);
volatile UINT *ADDR_CALC20_BS = (volatile UINT *)(CALC20 + 17);

volatile uint8_t *FLAGS_CALC21 = (uint8_t *)(CALC21);
volatile UINT *ADDR_WM_CALC21_STREAM = (volatile UINT *)(CALC21 + 1);
volatile UINT *ADDR_CALC21_WM_STREAM = (volatile UINT *)(CALC21 + 9);
volatile UINT *ADDR_CALC21_BS = (volatile UINT *)(CALC21 + 17);

volatile uint8_t *FLAGS_CALC22 = (uint8_t *)(CALC22);
volatile UINT *ADDR_WM_CALC22_STREAM = (volatile UINT *)(CALC22 + 1);
volatile UINT *ADDR_CALC22_WM_STREAM = (volatile UINT *)(CALC22 + 9);
volatile UINT *ADDR_CALC22_BS = (volatile UINT *)(CALC22 + 17);

volatile uint8_t *FLAGS_CALC23 = (uint8_t *)(CALC23);
volatile UINT *ADDR_WM_CALC23_STREAM = (volatile UINT *)(CALC23 + 1);
volatile UINT *ADDR_CALC23_WM_STREAM = (volatile UINT *)(CALC23 + 9);
volatile UINT *ADDR_CALC23_BS = (volatile UINT *)(CALC23 + 17);

volatile uint8_t *FLAGS_CALC24 = (uint8_t *)(CALC24);
volatile UINT *ADDR_WM_CALC24_STREAM = (volatile UINT *)(CALC24 + 1);
volatile UINT *ADDR_CALC24_WM_STREAM = (volatile UINT *)(CALC24 + 9);
volatile UINT *ADDR_CALC24_BS = (volatile UINT *)(CALC24 + 17);

volatile uint8_t *FLAGS_CALC25 = (uint8_t *)(CALC25);
volatile UINT *ADDR_WM_CALC25_STREAM = (volatile UINT *)(CALC25 + 1);
volatile UINT *ADDR_CALC25_WM_STREAM = (volatile UINT *)(CALC25 + 9);
volatile UINT *ADDR_CALC25_BS = (volatile UINT *)(CALC25 + 17);

volatile uint8_t *FLAGS_CALC26 = (uint8_t *)(CALC26);
volatile UINT *ADDR_WM_CALC26_STREAM = (volatile UINT *)(CALC26 + 1);
volatile UINT *ADDR_CALC26_WM_STREAM = (volatile UINT *)(CALC26 + 9);
volatile UINT *ADDR_CALC26_BS = (volatile UINT *)(CALC26 + 17);

volatile uint8_t *FLAGS_CALC27 = (uint8_t *)(CALC27);
volatile UINT *ADDR_WM_CALC27_STREAM = (volatile UINT *)(CALC27 + 1);
volatile UINT *ADDR_CALC27_WM_STREAM = (volatile UINT *)(CALC27 + 9);
volatile UINT *ADDR_CALC27_BS = (volatile UINT *)(CALC27 + 17);

volatile uint8_t *FLAGS_CALC28 = (uint8_t *)(CALC28);
volatile UINT *ADDR_WM_CALC28_STREAM = (volatile UINT *)(CALC28 + 1);
volatile UINT *ADDR_CALC28_WM_STREAM = (volatile UINT *)(CALC28 + 9);
volatile UINT *ADDR_CALC28_BS = (volatile UINT *)(CALC28 + 17);

volatile uint8_t *FLAGS_CALC29 = (uint8_t *)(CALC29);
volatile UINT *ADDR_WM_CALC29_STREAM = (volatile UINT *)(CALC29 + 1);
volatile UINT *ADDR_CALC29_WM_STREAM = (volatile UINT *)(CALC29 + 9);
volatile UINT *ADDR_CALC29_BS = (volatile UINT *)(CALC29 + 17);

volatile uint8_t *FLAGS_CALC30 = (uint8_t *)(CALC30);
volatile UINT *ADDR_WM_CALC30_STREAM = (volatile UINT *)(CALC30 + 1);
volatile UINT *ADDR_CALC30_WM_STREAM = (volatile UINT *)(CALC30 + 9);
volatile UINT *ADDR_CALC30_BS = (volatile UINT *)(CALC30 + 17);

volatile uint8_t *FLAGS_CALC31 = (uint8_t *)(CALC31);
volatile UINT *ADDR_WM_CALC31_STREAM = (volatile UINT *)(CALC31 + 1);
volatile UINT *ADDR_CALC31_WM_STREAM = (volatile UINT *)(CALC31 + 9);
volatile UINT *ADDR_CALC31_BS = (volatile UINT *)(CALC31 + 17);

volatile uint8_t *FLAGS_CALC32 = (uint8_t *)(CALC32);
volatile UINT *ADDR_WM_CALC32_STREAM = (volatile UINT *)(CALC32 + 1);
volatile UINT *ADDR_CALC32_WM_STREAM = (volatile UINT *)(CALC32 + 9);
volatile UINT *ADDR_CALC32_BS = (volatile UINT *)(CALC32 + 17);

volatile uint8_t *FLAGS_CALC33 = (uint8_t *)(CALC33);
volatile UINT *ADDR_WM_CALC33_STREAM = (volatile UINT *)(CALC33 + 1);
volatile UINT *ADDR_CALC33_WM_STREAM = (volatile UINT *)(CALC33 + 9);
volatile UINT *ADDR_CALC33_BS = (volatile UINT *)(CALC33 + 17);

volatile uint8_t *FLAGS_CALC34 = (uint8_t *)(CALC34);
volatile UINT *ADDR_WM_CALC34_STREAM = (volatile UINT *)(CALC34 + 1);
volatile UINT *ADDR_CALC34_WM_STREAM = (volatile UINT *)(CALC34 + 9);
volatile UINT *ADDR_CALC34_BS = (volatile UINT *)(CALC34 + 17);

volatile uint8_t *FLAGS_CALC35 = (uint8_t *)(CALC35);
volatile UINT *ADDR_WM_CALC35_STREAM = (volatile UINT *)(CALC35 + 1);
volatile UINT *ADDR_CALC35_WM_STREAM = (volatile UINT *)(CALC35 + 9);
volatile UINT *ADDR_CALC35_BS = (volatile UINT *)(CALC35 + 17);

volatile uint8_t *FLAGS_CALC36 = (uint8_t *)(CALC36);
volatile UINT *ADDR_WM_CALC36_STREAM = (volatile UINT *)(CALC36 + 1);
volatile UINT *ADDR_CALC36_WM_STREAM = (volatile UINT *)(CALC36 + 9);
volatile UINT *ADDR_CALC36_BS = (volatile UINT *)(CALC36 + 17);

volatile uint8_t *FLAGS_CALC37 = (uint8_t *)(CALC37);
volatile UINT *ADDR_WM_CALC37_STREAM = (volatile UINT *)(CALC37 + 1);
volatile UINT *ADDR_CALC37_WM_STREAM = (volatile UINT *)(CALC37 + 9);
volatile UINT *ADDR_CALC37_BS = (volatile UINT *)(CALC37 + 17);

volatile uint8_t *FLAGS_CALC38 = (uint8_t *)(CALC38);
volatile UINT *ADDR_WM_CALC38_STREAM = (volatile UINT *)(CALC38 + 1);
volatile UINT *ADDR_CALC38_WM_STREAM = (volatile UINT *)(CALC38 + 9);
volatile UINT *ADDR_CALC38_BS = (volatile UINT *)(CALC38 + 17);

volatile uint8_t *FLAGS_CALC39 = (uint8_t *)(CALC39);
volatile UINT *ADDR_WM_CALC39_STREAM = (volatile UINT *)(CALC39 + 1);
volatile UINT *ADDR_CALC39_WM_STREAM = (volatile UINT *)(CALC39 + 9);
volatile UINT *ADDR_CALC39_BS = (volatile UINT *)(CALC39 + 17);

volatile uint8_t *FLAGS_CALC40 = (uint8_t *)(CALC40);
volatile UINT *ADDR_WM_CALC40_STREAM = (volatile UINT *)(CALC40 + 1);
volatile UINT *ADDR_CALC40_WM_STREAM = (volatile UINT *)(CALC40 + 9);
volatile UINT *ADDR_CALC40_BS = (volatile UINT *)(CALC40 + 17);

volatile uint8_t *FLAGS_CALC41 = (uint8_t *)(CALC41);
volatile UINT *ADDR_WM_CALC41_STREAM = (volatile UINT *)(CALC41 + 1);
volatile UINT *ADDR_CALC41_WM_STREAM = (volatile UINT *)(CALC41 + 9);
volatile UINT *ADDR_CALC41_BS = (volatile UINT *)(CALC41 + 17);

volatile uint8_t *FLAGS_CALC42 = (uint8_t *)(CALC42);
volatile UINT *ADDR_WM_CALC42_STREAM = (volatile UINT *)(CALC42 + 1);
volatile UINT *ADDR_CALC42_WM_STREAM = (volatile UINT *)(CALC42 + 9);
volatile UINT *ADDR_CALC42_BS = (volatile UINT *)(CALC42 + 17);

volatile uint8_t *FLAGS_CALC43 = (uint8_t *)(CALC43);
volatile UINT *ADDR_WM_CALC43_STREAM = (volatile UINT *)(CALC43 + 1);
volatile UINT *ADDR_CALC43_WM_STREAM = (volatile UINT *)(CALC43 + 9);
volatile UINT *ADDR_CALC43_BS = (volatile UINT *)(CALC43 + 17);

volatile uint8_t *FLAGS_CALC44 = (uint8_t *)(CALC44);
volatile UINT *ADDR_WM_CALC44_STREAM = (volatile UINT *)(CALC44 + 1);
volatile UINT *ADDR_CALC44_WM_STREAM = (volatile UINT *)(CALC44 + 9);
volatile UINT *ADDR_CALC44_BS = (volatile UINT *)(CALC44 + 17);

volatile uint8_t *FLAGS_CALC45 = (uint8_t *)(CALC45);
volatile UINT *ADDR_WM_CALC45_STREAM = (volatile UINT *)(CALC45 + 1);
volatile UINT *ADDR_CALC45_WM_STREAM = (volatile UINT *)(CALC45 + 9);
volatile UINT *ADDR_CALC45_BS = (volatile UINT *)(CALC45 + 17);

volatile uint8_t *FLAGS_CALC46 = (uint8_t *)(CALC46);
volatile UINT *ADDR_WM_CALC46_STREAM = (volatile UINT *)(CALC46 + 1);
volatile UINT *ADDR_CALC46_WM_STREAM = (volatile UINT *)(CALC46 + 9);
volatile UINT *ADDR_CALC46_BS = (volatile UINT *)(CALC46 + 17);

volatile uint8_t *FLAGS_CALC47 = (uint8_t *)(CALC47);
volatile UINT *ADDR_WM_CALC47_STREAM = (volatile UINT *)(CALC47 + 1);
volatile UINT *ADDR_CALC47_WM_STREAM = (volatile UINT *)(CALC47 + 9);
volatile UINT *ADDR_CALC47_BS = (volatile UINT *)(CALC47 + 17);

volatile uint8_t *FLAGS_CALC48 = (uint8_t *)(CALC48);
volatile UINT *ADDR_WM_CALC48_STREAM = (volatile UINT *)(CALC48 + 1);
volatile UINT *ADDR_CALC48_WM_STREAM = (volatile UINT *)(CALC48 + 9);
volatile UINT *ADDR_CALC48_BS = (volatile UINT *)(CALC48 + 17);

volatile uint8_t *FLAGS_CALC49 = (uint8_t *)(CALC49);
volatile UINT *ADDR_WM_CALC49_STREAM = (volatile UINT *)(CALC49 + 1);
volatile UINT *ADDR_CALC49_WM_STREAM = (volatile UINT *)(CALC49 + 9);
volatile UINT *ADDR_CALC49_BS = (volatile UINT *)(CALC49 + 17);

volatile uint8_t *FLAGS_CALC50 = (uint8_t *)(CALC50);
volatile UINT *ADDR_WM_CALC50_STREAM = (volatile UINT *)(CALC50 + 1);
volatile UINT *ADDR_CALC50_WM_STREAM = (volatile UINT *)(CALC50 + 9);
volatile UINT *ADDR_CALC50_BS = (volatile UINT *)(CALC50 + 17);

volatile uint8_t *FLAGS_CALC51 = (uint8_t *)(CALC51);
volatile UINT *ADDR_WM_CALC51_STREAM = (volatile UINT *)(CALC51 + 1);
volatile UINT *ADDR_CALC51_WM_STREAM = (volatile UINT *)(CALC51 + 9);
volatile UINT *ADDR_CALC51_BS = (volatile UINT *)(CALC51 + 17);

volatile uint8_t *FLAGS_CALC52 = (uint8_t *)(CALC52);
volatile UINT *ADDR_WM_CALC52_STREAM = (volatile UINT *)(CALC52 + 1);
volatile UINT *ADDR_CALC52_WM_STREAM = (volatile UINT *)(CALC52 + 9);
volatile UINT *ADDR_CALC52_BS = (volatile UINT *)(CALC52 + 17);

volatile uint8_t *FLAGS_CALC53 = (uint8_t *)(CALC53);
volatile UINT *ADDR_WM_CALC53_STREAM = (volatile UINT *)(CALC53 + 1);
volatile UINT *ADDR_CALC53_WM_STREAM = (volatile UINT *)(CALC53 + 9);
volatile UINT *ADDR_CALC53_BS = (volatile UINT *)(CALC53 + 17);

volatile uint8_t *FLAGS_CALC54 = (uint8_t *)(CALC54);
volatile UINT *ADDR_WM_CALC54_STREAM = (volatile UINT *)(CALC54 + 1);
volatile UINT *ADDR_CALC54_WM_STREAM = (volatile UINT *)(CALC54 + 9);
volatile UINT *ADDR_CALC54_BS = (volatile UINT *)(CALC54 + 17);

volatile uint8_t *FLAGS_CALC55 = (uint8_t *)(CALC55);
volatile UINT *ADDR_WM_CALC55_STREAM = (volatile UINT *)(CALC55 + 1);
volatile UINT *ADDR_CALC55_WM_STREAM = (volatile UINT *)(CALC55 + 9);
volatile UINT *ADDR_CALC55_BS = (volatile UINT *)(CALC55 + 17);

volatile uint8_t *FLAGS_CALC56 = (uint8_t *)(CALC56);
volatile UINT *ADDR_WM_CALC56_STREAM = (volatile UINT *)(CALC56 + 1);
volatile UINT *ADDR_CALC56_WM_STREAM = (volatile UINT *)(CALC56 + 9);
volatile UINT *ADDR_CALC56_BS = (volatile UINT *)(CALC56 + 17);

volatile uint8_t *FLAGS_CALC57 = (uint8_t *)(CALC57);
volatile UINT *ADDR_WM_CALC57_STREAM = (volatile UINT *)(CALC57 + 1);
volatile UINT *ADDR_CALC57_WM_STREAM = (volatile UINT *)(CALC57 + 9);
volatile UINT *ADDR_CALC57_BS = (volatile UINT *)(CALC57 + 17);

volatile uint8_t *FLAGS_CALC58 = (uint8_t *)(CALC58);
volatile UINT *ADDR_WM_CALC58_STREAM = (volatile UINT *)(CALC58 + 1);
volatile UINT *ADDR_CALC58_WM_STREAM = (volatile UINT *)(CALC58 + 9);
volatile UINT *ADDR_CALC58_BS = (volatile UINT *)(CALC58 + 17);

volatile uint8_t *FLAGS_CALC59 = (uint8_t *)(CALC59);
volatile UINT *ADDR_WM_CALC59_STREAM = (volatile UINT *)(CALC59 + 1);
volatile UINT *ADDR_CALC59_WM_STREAM = (volatile UINT *)(CALC59 + 9);
volatile UINT *ADDR_CALC59_BS = (volatile UINT *)(CALC59 + 17);

volatile uint8_t *FLAGS_CALC60 = (uint8_t *)(CALC60);
volatile UINT *ADDR_WM_CALC60_STREAM = (volatile UINT *)(CALC60 + 1);
volatile UINT *ADDR_CALC60_WM_STREAM = (volatile UINT *)(CALC60 + 9);
volatile UINT *ADDR_CALC60_BS = (volatile UINT *)(CALC60 + 17);

volatile uint8_t *FLAGS_CALC61 = (uint8_t *)(CALC61);
volatile UINT *ADDR_WM_CALC61_STREAM = (volatile UINT *)(CALC61 + 1);
volatile UINT *ADDR_CALC61_WM_STREAM = (volatile UINT *)(CALC61 + 9);
volatile UINT *ADDR_CALC61_BS = (volatile UINT *)(CALC61 + 17);

volatile uint8_t *FLAGS_CALC62 = (uint8_t *)(CALC62);
volatile UINT *ADDR_WM_CALC62_STREAM = (volatile UINT *)(CALC62 + 1);
volatile UINT *ADDR_CALC62_WM_STREAM = (volatile UINT *)(CALC62 + 9);
volatile UINT *ADDR_CALC62_BS = (volatile UINT *)(CALC62 + 17);

volatile uint8_t *FLAGS_CALC63 = (uint8_t *)(CALC63);
volatile UINT *ADDR_WM_CALC63_STREAM = (volatile UINT *)(CALC63 + 1);
volatile UINT *ADDR_CALC63_WM_STREAM = (volatile UINT *)(CALC63 + 9);
volatile UINT *ADDR_CALC63_BS = (volatile UINT *)(CALC63 + 17);

volatile uint8_t *FLAGS_CALC64 = (uint8_t *)(CALC64);
volatile UINT *ADDR_WM_CALC64_STREAM = (volatile UINT *)(CALC64 + 1);
volatile UINT *ADDR_CALC64_WM_STREAM = (volatile UINT *)(CALC64 + 9);
volatile UINT *ADDR_CALC64_BS = (volatile UINT *)(CALC64 + 17);

volatile uint8_t *FLAGS_CALC65 = (uint8_t *)(CALC65);
volatile UINT *ADDR_WM_CALC65_STREAM = (volatile UINT *)(CALC65 + 1);
volatile UINT *ADDR_CALC65_WM_STREAM = (volatile UINT *)(CALC65 + 9);
volatile UINT *ADDR_CALC65_BS = (volatile UINT *)(CALC65 + 17);

volatile uint8_t *FLAGS_CALC66 = (uint8_t *)(CALC66);
volatile UINT *ADDR_WM_CALC66_STREAM = (volatile UINT *)(CALC66 + 1);
volatile UINT *ADDR_CALC66_WM_STREAM = (volatile UINT *)(CALC66 + 9);
volatile UINT *ADDR_CALC66_BS = (volatile UINT *)(CALC66 + 17);

volatile uint8_t *FLAGS_CALC67 = (uint8_t *)(CALC67);
volatile UINT *ADDR_WM_CALC67_STREAM = (volatile UINT *)(CALC67 + 1);
volatile UINT *ADDR_CALC67_WM_STREAM = (volatile UINT *)(CALC67 + 9);
volatile UINT *ADDR_CALC67_BS = (volatile UINT *)(CALC67 + 17);

volatile uint8_t *FLAGS_CALC68 = (uint8_t *)(CALC68);
volatile UINT *ADDR_WM_CALC68_STREAM = (volatile UINT *)(CALC68 + 1);
volatile UINT *ADDR_CALC68_WM_STREAM = (volatile UINT *)(CALC68 + 9);
volatile UINT *ADDR_CALC68_BS = (volatile UINT *)(CALC68 + 17);

volatile uint8_t *FLAGS_CALC69 = (uint8_t *)(CALC69);
volatile UINT *ADDR_WM_CALC69_STREAM = (volatile UINT *)(CALC69 + 1);
volatile UINT *ADDR_CALC69_WM_STREAM = (volatile UINT *)(CALC69 + 9);
volatile UINT *ADDR_CALC69_BS = (volatile UINT *)(CALC69 + 17);

volatile uint8_t *FLAGS_CALC70 = (uint8_t *)(CALC70);
volatile UINT *ADDR_WM_CALC70_STREAM = (volatile UINT *)(CALC70 + 1);
volatile UINT *ADDR_CALC70_WM_STREAM = (volatile UINT *)(CALC70 + 9);
volatile UINT *ADDR_CALC70_BS = (volatile UINT *)(CALC70 + 17);

volatile uint8_t *FLAGS_CALC71 = (uint8_t *)(CALC71);
volatile UINT *ADDR_WM_CALC71_STREAM = (volatile UINT *)(CALC71 + 1);
volatile UINT *ADDR_CALC71_WM_STREAM = (volatile UINT *)(CALC71 + 9);
volatile UINT *ADDR_CALC71_BS = (volatile UINT *)(CALC71 + 17);

volatile uint8_t *FLAGS_CALC72 = (uint8_t *)(CALC72);
volatile UINT *ADDR_WM_CALC72_STREAM = (volatile UINT *)(CALC72 + 1);
volatile UINT *ADDR_CALC72_WM_STREAM = (volatile UINT *)(CALC72 + 9);
volatile UINT *ADDR_CALC72_BS = (volatile UINT *)(CALC72 + 17);

volatile uint8_t *FLAGS_CALC73 = (uint8_t *)(CALC73);
volatile UINT *ADDR_WM_CALC73_STREAM = (volatile UINT *)(CALC73 + 1);
volatile UINT *ADDR_CALC73_WM_STREAM = (volatile UINT *)(CALC73 + 9);
volatile UINT *ADDR_CALC73_BS = (volatile UINT *)(CALC73 + 17);

volatile uint8_t *FLAGS_CALC74 = (uint8_t *)(CALC74);
volatile UINT *ADDR_WM_CALC74_STREAM = (volatile UINT *)(CALC74 + 1);
volatile UINT *ADDR_CALC74_WM_STREAM = (volatile UINT *)(CALC74 + 9);
volatile UINT *ADDR_CALC74_BS = (volatile UINT *)(CALC74 + 17);

volatile uint8_t *FLAGS_CALC75 = (uint8_t *)(CALC75);
volatile UINT *ADDR_WM_CALC75_STREAM = (volatile UINT *)(CALC75 + 1);
volatile UINT *ADDR_CALC75_WM_STREAM = (volatile UINT *)(CALC75 + 9);
volatile UINT *ADDR_CALC75_BS = (volatile UINT *)(CALC75 + 17);

volatile uint8_t *FLAGS_CALC76 = (uint8_t *)(CALC76);
volatile UINT *ADDR_WM_CALC76_STREAM = (volatile UINT *)(CALC76 + 1);
volatile UINT *ADDR_CALC76_WM_STREAM = (volatile UINT *)(CALC76 + 9);
volatile UINT *ADDR_CALC76_BS = (volatile UINT *)(CALC76 + 17);

volatile uint8_t *FLAGS_CALC77 = (uint8_t *)(CALC77);
volatile UINT *ADDR_WM_CALC77_STREAM = (volatile UINT *)(CALC77 + 1);
volatile UINT *ADDR_CALC77_WM_STREAM = (volatile UINT *)(CALC77 + 9);
volatile UINT *ADDR_CALC77_BS = (volatile UINT *)(CALC77 + 17);

volatile uint8_t *FLAGS_CALC78 = (uint8_t *)(CALC78);
volatile UINT *ADDR_WM_CALC78_STREAM = (volatile UINT *)(CALC78 + 1);
volatile UINT *ADDR_CALC78_WM_STREAM = (volatile UINT *)(CALC78 + 9);
volatile UINT *ADDR_CALC78_BS = (volatile UINT *)(CALC78 + 17);

volatile uint8_t *FLAGS_CALC79 = (uint8_t *)(CALC79);
volatile UINT *ADDR_WM_CALC79_STREAM = (volatile UINT *)(CALC79 + 1);
volatile UINT *ADDR_CALC79_WM_STREAM = (volatile UINT *)(CALC79 + 9);
volatile UINT *ADDR_CALC79_BS = (volatile UINT *)(CALC79 + 17);

volatile uint8_t *FLAGS_CALC80 = (uint8_t *)(CALC80);
volatile UINT *ADDR_WM_CALC80_STREAM = (volatile UINT *)(CALC80 + 1);
volatile UINT *ADDR_CALC80_WM_STREAM = (volatile UINT *)(CALC80 + 9);
volatile UINT *ADDR_CALC80_BS = (volatile UINT *)(CALC80 + 17);

volatile uint8_t *FLAGS_CALC81 = (uint8_t *)(CALC81);
volatile UINT *ADDR_WM_CALC81_STREAM = (volatile UINT *)(CALC81 + 1);
volatile UINT *ADDR_CALC81_WM_STREAM = (volatile UINT *)(CALC81 + 9);
volatile UINT *ADDR_CALC81_BS = (volatile UINT *)(CALC81 + 17);

volatile uint8_t *FLAGS_CALC82 = (uint8_t *)(CALC82);
volatile UINT *ADDR_WM_CALC82_STREAM = (volatile UINT *)(CALC82 + 1);
volatile UINT *ADDR_CALC82_WM_STREAM = (volatile UINT *)(CALC82 + 9);
volatile UINT *ADDR_CALC82_BS = (volatile UINT *)(CALC82 + 17);

volatile uint8_t *FLAGS_CALC83 = (uint8_t *)(CALC83);
volatile UINT *ADDR_WM_CALC83_STREAM = (volatile UINT *)(CALC83 + 1);
volatile UINT *ADDR_CALC83_WM_STREAM = (volatile UINT *)(CALC83 + 9);
volatile UINT *ADDR_CALC83_BS = (volatile UINT *)(CALC83 + 17);

volatile uint8_t *FLAGS_CALC84 = (uint8_t *)(CALC84);
volatile UINT *ADDR_WM_CALC84_STREAM = (volatile UINT *)(CALC84 + 1);
volatile UINT *ADDR_CALC84_WM_STREAM = (volatile UINT *)(CALC84 + 9);
volatile UINT *ADDR_CALC84_BS = (volatile UINT *)(CALC84 + 17);

volatile uint8_t *FLAGS_CALC85 = (uint8_t *)(CALC85);
volatile UINT *ADDR_WM_CALC85_STREAM = (volatile UINT *)(CALC85 + 1);
volatile UINT *ADDR_CALC85_WM_STREAM = (volatile UINT *)(CALC85 + 9);
volatile UINT *ADDR_CALC85_BS = (volatile UINT *)(CALC85 + 17);

volatile uint8_t *FLAGS_CALC86 = (uint8_t *)(CALC86);
volatile UINT *ADDR_WM_CALC86_STREAM = (volatile UINT *)(CALC86 + 1);
volatile UINT *ADDR_CALC86_WM_STREAM = (volatile UINT *)(CALC86 + 9);
volatile UINT *ADDR_CALC86_BS = (volatile UINT *)(CALC86 + 17);

volatile uint8_t *FLAGS_CALC87 = (uint8_t *)(CALC87);
volatile UINT *ADDR_WM_CALC87_STREAM = (volatile UINT *)(CALC87 + 1);
volatile UINT *ADDR_CALC87_WM_STREAM = (volatile UINT *)(CALC87 + 9);
volatile UINT *ADDR_CALC87_BS = (volatile UINT *)(CALC87 + 17);

volatile uint8_t *FLAGS_CALC88 = (uint8_t *)(CALC88);
volatile UINT *ADDR_WM_CALC88_STREAM = (volatile UINT *)(CALC88 + 1);
volatile UINT *ADDR_CALC88_WM_STREAM = (volatile UINT *)(CALC88 + 9);
volatile UINT *ADDR_CALC88_BS = (volatile UINT *)(CALC88 + 17);

volatile uint8_t *FLAGS_CALC89 = (uint8_t *)(CALC89);
volatile UINT *ADDR_WM_CALC89_STREAM = (volatile UINT *)(CALC89 + 1);
volatile UINT *ADDR_CALC89_WM_STREAM = (volatile UINT *)(CALC89 + 9);
volatile UINT *ADDR_CALC89_BS = (volatile UINT *)(CALC89 + 17);

volatile uint8_t *FLAGS_CALC90 = (uint8_t *)(CALC90);
volatile UINT *ADDR_WM_CALC90_STREAM = (volatile UINT *)(CALC90 + 1);
volatile UINT *ADDR_CALC90_WM_STREAM = (volatile UINT *)(CALC90 + 9);
volatile UINT *ADDR_CALC90_BS = (volatile UINT *)(CALC90 + 17);

volatile uint8_t *FLAGS_CALC91 = (uint8_t *)(CALC91);
volatile UINT *ADDR_WM_CALC91_STREAM = (volatile UINT *)(CALC91 + 1);
volatile UINT *ADDR_CALC91_WM_STREAM = (volatile UINT *)(CALC91 + 9);
volatile UINT *ADDR_CALC91_BS = (volatile UINT *)(CALC91 + 17);

volatile uint8_t *FLAGS_CALC92 = (uint8_t *)(CALC92);
volatile UINT *ADDR_WM_CALC92_STREAM = (volatile UINT *)(CALC92 + 1);
volatile UINT *ADDR_CALC92_WM_STREAM = (volatile UINT *)(CALC92 + 9);
volatile UINT *ADDR_CALC92_BS = (volatile UINT *)(CALC92 + 17);

volatile uint8_t *FLAGS_CALC93 = (uint8_t *)(CALC93);
volatile UINT *ADDR_WM_CALC93_STREAM = (volatile UINT *)(CALC93 + 1);
volatile UINT *ADDR_CALC93_WM_STREAM = (volatile UINT *)(CALC93 + 9);
volatile UINT *ADDR_CALC93_BS = (volatile UINT *)(CALC93 + 17);

volatile uint8_t *FLAGS_CALC94 = (uint8_t *)(CALC94);
volatile UINT *ADDR_WM_CALC94_STREAM = (volatile UINT *)(CALC94 + 1);
volatile UINT *ADDR_CALC94_WM_STREAM = (volatile UINT *)(CALC94 + 9);
volatile UINT *ADDR_CALC94_BS = (volatile UINT *)(CALC94 + 17);

volatile uint8_t *FLAGS_CALC95 = (uint8_t *)(CALC95);
volatile UINT *ADDR_WM_CALC95_STREAM = (volatile UINT *)(CALC95 + 1);
volatile UINT *ADDR_CALC95_WM_STREAM = (volatile UINT *)(CALC95 + 9);
volatile UINT *ADDR_CALC95_BS = (volatile UINT *)(CALC95 + 17);

volatile uint8_t *FLAGS_CALC96 = (uint8_t *)(CALC96);
volatile UINT *ADDR_WM_CALC96_STREAM = (volatile UINT *)(CALC96 + 1);
volatile UINT *ADDR_CALC96_WM_STREAM = (volatile UINT *)(CALC96 + 9);
volatile UINT *ADDR_CALC96_BS = (volatile UINT *)(CALC96 + 17);

volatile uint8_t *FLAGS_CALC97 = (uint8_t *)(CALC97);
volatile UINT *ADDR_WM_CALC97_STREAM = (volatile UINT *)(CALC97 + 1);
volatile UINT *ADDR_CALC97_WM_STREAM = (volatile UINT *)(CALC97 + 9);
volatile UINT *ADDR_CALC97_BS = (volatile UINT *)(CALC97 + 17);

volatile uint8_t *FLAGS_CALC98 = (uint8_t *)(CALC98);
volatile UINT *ADDR_WM_CALC98_STREAM = (volatile UINT *)(CALC98 + 1);
volatile UINT *ADDR_CALC98_WM_STREAM = (volatile UINT *)(CALC98 + 9);
volatile UINT *ADDR_CALC98_BS = (volatile UINT *)(CALC98 + 17);

volatile uint8_t *FLAGS_CALC99 = (uint8_t *)(CALC99);
volatile UINT *ADDR_WM_CALC99_STREAM = (volatile UINT *)(CALC99 + 1);
volatile UINT *ADDR_CALC99_WM_STREAM = (volatile UINT *)(CALC99 + 9);
volatile UINT *ADDR_CALC99_BS = (volatile UINT *)(CALC99 + 17);

volatile uint8_t *FLAGS_CALC100 = (uint8_t *)(CALC100);
volatile UINT *ADDR_WM_CALC100_STREAM = (volatile UINT *)(CALC100 + 1);
volatile UINT *ADDR_CALC100_WM_STREAM = (volatile UINT *)(CALC100 + 9);
volatile UINT *ADDR_CALC100_BS = (volatile UINT *)(CALC100 + 17);

volatile uint8_t *FLAGS_CALC101 = (uint8_t *)(CALC101);
volatile UINT *ADDR_WM_CALC101_STREAM = (volatile UINT *)(CALC101 + 1);
volatile UINT *ADDR_CALC101_WM_STREAM = (volatile UINT *)(CALC101 + 9);
volatile UINT *ADDR_CALC101_BS = (volatile UINT *)(CALC101 + 17);

volatile uint8_t *FLAGS_CALC102 = (uint8_t *)(CALC102);
volatile UINT *ADDR_WM_CALC102_STREAM = (volatile UINT *)(CALC102 + 1);
volatile UINT *ADDR_CALC102_WM_STREAM = (volatile UINT *)(CALC102 + 9);
volatile UINT *ADDR_CALC102_BS = (volatile UINT *)(CALC102 + 17);

volatile uint8_t *FLAGS_CALC103 = (uint8_t *)(CALC103);
volatile UINT *ADDR_WM_CALC103_STREAM = (volatile UINT *)(CALC103 + 1);
volatile UINT *ADDR_CALC103_WM_STREAM = (volatile UINT *)(CALC103 + 9);
volatile UINT *ADDR_CALC103_BS = (volatile UINT *)(CALC103 + 17);

volatile uint8_t *FLAGS_CALC104 = (uint8_t *)(CALC104);
volatile UINT *ADDR_WM_CALC104_STREAM = (volatile UINT *)(CALC104 + 1);
volatile UINT *ADDR_CALC104_WM_STREAM = (volatile UINT *)(CALC104 + 9);
volatile UINT *ADDR_CALC104_BS = (volatile UINT *)(CALC104 + 17);

volatile uint8_t *FLAGS_CALC105 = (uint8_t *)(CALC105);
volatile UINT *ADDR_WM_CALC105_STREAM = (volatile UINT *)(CALC105 + 1);
volatile UINT *ADDR_CALC105_WM_STREAM = (volatile UINT *)(CALC105 + 9);
volatile UINT *ADDR_CALC105_BS = (volatile UINT *)(CALC105 + 17);

volatile uint8_t *FLAGS_CALC106 = (uint8_t *)(CALC106);
volatile UINT *ADDR_WM_CALC106_STREAM = (volatile UINT *)(CALC106 + 1);
volatile UINT *ADDR_CALC106_WM_STREAM = (volatile UINT *)(CALC106 + 9);
volatile UINT *ADDR_CALC106_BS = (volatile UINT *)(CALC106 + 17);

volatile uint8_t *FLAGS_CALC107 = (uint8_t *)(CALC107);
volatile UINT *ADDR_WM_CALC107_STREAM = (volatile UINT *)(CALC107 + 1);
volatile UINT *ADDR_CALC107_WM_STREAM = (volatile UINT *)(CALC107 + 9);
volatile UINT *ADDR_CALC107_BS = (volatile UINT *)(CALC107 + 17);

volatile uint8_t *FLAGS_CALC108 = (uint8_t *)(CALC108);
volatile UINT *ADDR_WM_CALC108_STREAM = (volatile UINT *)(CALC108 + 1);
volatile UINT *ADDR_CALC108_WM_STREAM = (volatile UINT *)(CALC108 + 9);
volatile UINT *ADDR_CALC108_BS = (volatile UINT *)(CALC108 + 17);

volatile uint8_t *FLAGS_CALC109 = (uint8_t *)(CALC109);
volatile UINT *ADDR_WM_CALC109_STREAM = (volatile UINT *)(CALC109 + 1);
volatile UINT *ADDR_CALC109_WM_STREAM = (volatile UINT *)(CALC109 + 9);
volatile UINT *ADDR_CALC109_BS = (volatile UINT *)(CALC109 + 17);

volatile uint8_t *FLAGS_CALC110 = (uint8_t *)(CALC110);
volatile UINT *ADDR_WM_CALC110_STREAM = (volatile UINT *)(CALC110 + 1);
volatile UINT *ADDR_CALC110_WM_STREAM = (volatile UINT *)(CALC110 + 9);
volatile UINT *ADDR_CALC110_BS = (volatile UINT *)(CALC110 + 17);

volatile uint8_t *FLAGS_CALC111 = (uint8_t *)(CALC111);
volatile UINT *ADDR_WM_CALC111_STREAM = (volatile UINT *)(CALC111 + 1);
volatile UINT *ADDR_CALC111_WM_STREAM = (volatile UINT *)(CALC111 + 9);
volatile UINT *ADDR_CALC111_BS = (volatile UINT *)(CALC111 + 17);

volatile uint8_t *FLAGS_CALC112 = (uint8_t *)(CALC112);
volatile UINT *ADDR_WM_CALC112_STREAM = (volatile UINT *)(CALC112 + 1);
volatile UINT *ADDR_CALC112_WM_STREAM = (volatile UINT *)(CALC112 + 9);
volatile UINT *ADDR_CALC112_BS = (volatile UINT *)(CALC112 + 17);

volatile uint8_t *FLAGS_CALC113 = (uint8_t *)(CALC113);
volatile UINT *ADDR_WM_CALC113_STREAM = (volatile UINT *)(CALC113 + 1);
volatile UINT *ADDR_CALC113_WM_STREAM = (volatile UINT *)(CALC113 + 9);
volatile UINT *ADDR_CALC113_BS = (volatile UINT *)(CALC113 + 17);

volatile uint8_t *FLAGS_CALC114 = (uint8_t *)(CALC114);
volatile UINT *ADDR_WM_CALC114_STREAM = (volatile UINT *)(CALC114 + 1);
volatile UINT *ADDR_CALC114_WM_STREAM = (volatile UINT *)(CALC114 + 9);
volatile UINT *ADDR_CALC114_BS = (volatile UINT *)(CALC114 + 17);

volatile uint8_t *FLAGS_CALC115 = (uint8_t *)(CALC115);
volatile UINT *ADDR_WM_CALC115_STREAM = (volatile UINT *)(CALC115 + 1);
volatile UINT *ADDR_CALC115_WM_STREAM = (volatile UINT *)(CALC115 + 9);
volatile UINT *ADDR_CALC115_BS = (volatile UINT *)(CALC115 + 17);

volatile uint8_t *FLAGS_CALC116 = (uint8_t *)(CALC116);
volatile UINT *ADDR_WM_CALC116_STREAM = (volatile UINT *)(CALC116 + 1);
volatile UINT *ADDR_CALC116_WM_STREAM = (volatile UINT *)(CALC116 + 9);
volatile UINT *ADDR_CALC116_BS = (volatile UINT *)(CALC116 + 17);

volatile uint8_t *FLAGS_CALC117 = (uint8_t *)(CALC117);
volatile UINT *ADDR_WM_CALC117_STREAM = (volatile UINT *)(CALC117 + 1);
volatile UINT *ADDR_CALC117_WM_STREAM = (volatile UINT *)(CALC117 + 9);
volatile UINT *ADDR_CALC117_BS = (volatile UINT *)(CALC117 + 17);

volatile uint8_t *FLAGS_CALC118 = (uint8_t *)(CALC118);
volatile UINT *ADDR_WM_CALC118_STREAM = (volatile UINT *)(CALC118 + 1);
volatile UINT *ADDR_CALC118_WM_STREAM = (volatile UINT *)(CALC118 + 9);
volatile UINT *ADDR_CALC118_BS = (volatile UINT *)(CALC118 + 17);

volatile uint8_t *FLAGS_CALC119 = (uint8_t *)(CALC119);
volatile UINT *ADDR_WM_CALC119_STREAM = (volatile UINT *)(CALC119 + 1);
volatile UINT *ADDR_CALC119_WM_STREAM = (volatile UINT *)(CALC119 + 9);
volatile UINT *ADDR_CALC119_BS = (volatile UINT *)(CALC119 + 17);

volatile uint8_t *FLAGS_CALC120 = (uint8_t *)(CALC120);
volatile UINT *ADDR_WM_CALC120_STREAM = (volatile UINT *)(CALC120 + 1);
volatile UINT *ADDR_CALC120_WM_STREAM = (volatile UINT *)(CALC120 + 9);
volatile UINT *ADDR_CALC120_BS = (volatile UINT *)(CALC120 + 17);

volatile uint8_t *FLAGS_CALC121 = (uint8_t *)(CALC121);
volatile UINT *ADDR_WM_CALC121_STREAM = (volatile UINT *)(CALC121 + 1);
volatile UINT *ADDR_CALC121_WM_STREAM = (volatile UINT *)(CALC121 + 9);
volatile UINT *ADDR_CALC121_BS = (volatile UINT *)(CALC121 + 17);

volatile uint8_t *FLAGS_CALC122 = (uint8_t *)(CALC122);
volatile UINT *ADDR_WM_CALC122_STREAM = (volatile UINT *)(CALC122 + 1);
volatile UINT *ADDR_CALC122_WM_STREAM = (volatile UINT *)(CALC122 + 9);
volatile UINT *ADDR_CALC122_BS = (volatile UINT *)(CALC122 + 17);

volatile uint8_t *FLAGS_CALC123 = (uint8_t *)(CALC123);
volatile UINT *ADDR_WM_CALC123_STREAM = (volatile UINT *)(CALC123 + 1);
volatile UINT *ADDR_CALC123_WM_STREAM = (volatile UINT *)(CALC123 + 9);
volatile UINT *ADDR_CALC123_BS = (volatile UINT *)(CALC123 + 17);

volatile uint8_t *FLAGS_CALC124 = (uint8_t *)(CALC124);
volatile UINT *ADDR_WM_CALC124_STREAM = (volatile UINT *)(CALC124 + 1);
volatile UINT *ADDR_CALC124_WM_STREAM = (volatile UINT *)(CALC124 + 9);
volatile UINT *ADDR_CALC124_BS = (volatile UINT *)(CALC124 + 17);

volatile uint8_t *FLAGS_CALC125 = (uint8_t *)(CALC125);
volatile UINT *ADDR_WM_CALC125_STREAM = (volatile UINT *)(CALC125 + 1);
volatile UINT *ADDR_CALC125_WM_STREAM = (volatile UINT *)(CALC125 + 9);
volatile UINT *ADDR_CALC125_BS = (volatile UINT *)(CALC125 + 17);

volatile uint8_t *FLAGS_CALC126 = (uint8_t *)(CALC126);
volatile UINT *ADDR_WM_CALC126_STREAM = (volatile UINT *)(CALC126 + 1);
volatile UINT *ADDR_CALC126_WM_STREAM = (volatile UINT *)(CALC126 + 9);
volatile UINT *ADDR_CALC126_BS = (volatile UINT *)(CALC126 + 17);

volatile uint8_t *FLAGS_CALC127 = (uint8_t *)(CALC127);
volatile UINT *ADDR_WM_CALC127_STREAM = (volatile UINT *)(CALC127 + 1);
volatile UINT *ADDR_CALC127_WM_STREAM = (volatile UINT *)(CALC127 + 9);
volatile UINT *ADDR_CALC127_BS = (volatile UINT *)(CALC127 + 17);

volatile uint8_t *FLAGS_CALC128 = (uint8_t *)(CALC128);
volatile UINT *ADDR_WM_CALC128_STREAM = (volatile UINT *)(CALC128 + 1);
volatile UINT *ADDR_CALC128_WM_STREAM = (volatile UINT *)(CALC128 + 9);
volatile UINT *ADDR_CALC128_BS = (volatile UINT *)(CALC128 + 17);

volatile uint8_t *FLAGS_WM = (uint8_t *)(WM);

void top(UINT *bs) {
  *FLAGS_WM = DEV_INIT;
  
  *((uint64_t *)bs) = (uint64_t)0x19241059184;

  // *ADDR_PE1_WM_STREAM = (ADDR)stream_pe1_wm;
  // *ADDR_WM_PE1_STREAM = (ADDR)stream_wm_pe1;
  // *ADDR_PE1_BS = (ADDR)bs;
  // *FLAGS_PE1 = DEV_INIT;

  // *ADDR_PE2_WM_STREAM = (ADDR)stream_pe2_wm;
  // *ADDR_WM_PE2_STREAM = (ADDR)stream_wm_pe2;
  // *ADDR_PE2_BS = (ADDR)bs;
  // *FLAGS_PE2 = DEV_INIT;

  // *ADDR_PE3_WM_STREAM = (ADDR)stream_pe3_wm;
  // *ADDR_WM_PE3_STREAM = (ADDR)stream_wm_pe3;
  // *ADDR_PE3_BS = (ADDR)bs;
  // *FLAGS_PE3 = DEV_INIT;

  // *ADDR_PE4_WM_STREAM = (ADDR)stream_pe4_wm;
  // *ADDR_WM_PE4_STREAM = (ADDR)stream_wm_pe4;
  // *ADDR_PE4_BS = (ADDR)bs;
  // *FLAGS_PE4 = DEV_INIT;

  // *ADDR_PE5_WM_STREAM = (ADDR)stream_pe5_wm;
  // *ADDR_WM_PE5_STREAM = (ADDR)stream_wm_pe5;
  // *ADDR_PE5_BS = (ADDR)bs;
  // *FLAGS_PE5 = DEV_INIT;

  // *ADDR_PE6_WM_STREAM = (ADDR)stream_pe6_wm;
  // *ADDR_WM_PE6_STREAM = (ADDR)stream_wm_pe6;
  // *ADDR_PE6_BS = (ADDR)bs;
  // *FLAGS_PE6 = DEV_INIT;

  // *ADDR_PE7_WM_STREAM = (ADDR)stream_pe7_wm;
  // *ADDR_WM_PE7_STREAM = (ADDR)stream_wm_pe7;
  // *ADDR_PE7_BS = (ADDR)bs;
  // *FLAGS_PE7 = DEV_INIT;

  // *ADDR_PE8_WM_STREAM = (ADDR)stream_pe8_wm;
  // *ADDR_WM_PE8_STREAM = (ADDR)stream_wm_pe8;
  // *ADDR_PE8_BS = (ADDR)bs;
  // *FLAGS_PE8 = DEV_INIT;

  // *ADDR_PE9_WM_STREAM = (ADDR)stream_pe9_wm;
  // *ADDR_WM_PE9_STREAM = (ADDR)stream_wm_pe9;
  // *ADDR_PE9_BS = (ADDR)bs;
  // *FLAGS_PE9 = DEV_INIT;

  // *ADDR_PE10_WM_STREAM = (ADDR)stream_pe10_wm;
  // *ADDR_WM_PE10_STREAM = (ADDR)stream_wm_pe10;
  // *ADDR_PE10_BS = (ADDR)bs;
  // *FLAGS_PE10 = DEV_INIT;

  // *ADDR_PE11_WM_STREAM = (ADDR)stream_pe11_wm;
  // *ADDR_WM_PE11_STREAM = (ADDR)stream_wm_pe11;
  // *ADDR_PE11_BS = (ADDR)bs;
  // *FLAGS_PE11 = DEV_INIT;

  // *ADDR_PE12_WM_STREAM = (ADDR)stream_pe12_wm;
  // *ADDR_WM_PE12_STREAM = (ADDR)stream_wm_pe12;
  // *ADDR_PE12_BS = (ADDR)bs;
  // *FLAGS_PE12 = DEV_INIT;

  // *ADDR_PE13_WM_STREAM = (ADDR)stream_pe13_wm;
  // *ADDR_WM_PE13_STREAM = (ADDR)stream_wm_pe13;
  // *ADDR_PE13_BS = (ADDR)bs;
  // *FLAGS_PE13 = DEV_INIT;

  // *ADDR_PE14_WM_STREAM = (ADDR)stream_pe14_wm;
  // *ADDR_WM_PE14_STREAM = (ADDR)stream_wm_pe14;
  // *ADDR_PE14_BS = (ADDR)bs;
  // *FLAGS_PE14 = DEV_INIT;

  // *ADDR_PE15_WM_STREAM = (ADDR)stream_pe15_wm;
  // *ADDR_WM_PE15_STREAM = (ADDR)stream_wm_pe15;
  // *ADDR_PE15_BS = (ADDR)bs;
  // *FLAGS_PE15 = DEV_INIT;

  // *ADDR_PE16_WM_STREAM = (ADDR)stream_pe16_wm;
  // *ADDR_WM_PE16_STREAM = (ADDR)stream_wm_pe16;
  // *ADDR_PE16_BS = (ADDR)bs;
  // *FLAGS_PE16 = DEV_INIT;

  *ADDR_WM_CALC1_STREAM = (ADDR)stream_wm_calc1;
  *ADDR_CALC1_WM_STREAM = (ADDR)stream_calc1_wm;
  *ADDR_CALC1_BS = (ADDR)bs;
  *FLAGS_CALC1 = DEV_INIT;
  *ADDR_WM_CALC2_STREAM = (ADDR)stream_wm_calc2;
  *ADDR_CALC2_WM_STREAM = (ADDR)stream_calc2_wm;
  *ADDR_CALC2_BS = (ADDR)bs;
  *FLAGS_CALC2 = DEV_INIT;
  *ADDR_WM_CALC3_STREAM = (ADDR)stream_wm_calc3;
  *ADDR_CALC3_WM_STREAM = (ADDR)stream_calc3_wm;
  *ADDR_CALC3_BS = (ADDR)bs;
  *FLAGS_CALC3 = DEV_INIT;
  *ADDR_WM_CALC4_STREAM = (ADDR)stream_wm_calc4;
  *ADDR_CALC4_WM_STREAM = (ADDR)stream_calc4_wm;
  *ADDR_CALC4_BS = (ADDR)bs;
  *FLAGS_CALC4 = DEV_INIT;
  *ADDR_WM_CALC5_STREAM = (ADDR)stream_wm_calc5;
  *ADDR_CALC5_WM_STREAM = (ADDR)stream_calc5_wm;
  *ADDR_CALC5_BS = (ADDR)bs;
  *FLAGS_CALC5 = DEV_INIT;
  *ADDR_WM_CALC6_STREAM = (ADDR)stream_wm_calc6;
  *ADDR_CALC6_WM_STREAM = (ADDR)stream_calc6_wm;
  *ADDR_CALC6_BS = (ADDR)bs;
  *FLAGS_CALC6 = DEV_INIT;
  *ADDR_WM_CALC7_STREAM = (ADDR)stream_wm_calc7;
  *ADDR_CALC7_WM_STREAM = (ADDR)stream_calc7_wm;
  *ADDR_CALC7_BS = (ADDR)bs;
  *FLAGS_CALC7 = DEV_INIT;
  *ADDR_WM_CALC8_STREAM = (ADDR)stream_wm_calc8;
  *ADDR_CALC8_WM_STREAM = (ADDR)stream_calc8_wm;
  *ADDR_CALC8_BS = (ADDR)bs;
  *FLAGS_CALC8 = DEV_INIT;
  *ADDR_WM_CALC9_STREAM = (ADDR)stream_wm_calc9;
  *ADDR_CALC9_WM_STREAM = (ADDR)stream_calc9_wm;
  *ADDR_CALC9_BS = (ADDR)bs;
  *FLAGS_CALC9 = DEV_INIT;
  *ADDR_WM_CALC10_STREAM = (ADDR)stream_wm_calc10;
  *ADDR_CALC10_WM_STREAM = (ADDR)stream_calc10_wm;
  *ADDR_CALC10_BS = (ADDR)bs;
  *FLAGS_CALC10 = DEV_INIT;
  *ADDR_WM_CALC11_STREAM = (ADDR)stream_wm_calc11;
  *ADDR_CALC11_WM_STREAM = (ADDR)stream_calc11_wm;
  *ADDR_CALC11_BS = (ADDR)bs;
  *FLAGS_CALC11 = DEV_INIT;
  *ADDR_WM_CALC12_STREAM = (ADDR)stream_wm_calc12;
  *ADDR_CALC12_WM_STREAM = (ADDR)stream_calc12_wm;
  *ADDR_CALC12_BS = (ADDR)bs;
  *FLAGS_CALC12 = DEV_INIT;
  *ADDR_WM_CALC13_STREAM = (ADDR)stream_wm_calc13;
  *ADDR_CALC13_WM_STREAM = (ADDR)stream_calc13_wm;
  *ADDR_CALC13_BS = (ADDR)bs;
  *FLAGS_CALC13 = DEV_INIT;
  *ADDR_WM_CALC14_STREAM = (ADDR)stream_wm_calc14;
  *ADDR_CALC14_WM_STREAM = (ADDR)stream_calc14_wm;
  *ADDR_CALC14_BS = (ADDR)bs;
  *FLAGS_CALC14 = DEV_INIT;
  *ADDR_WM_CALC15_STREAM = (ADDR)stream_wm_calc15;
  *ADDR_CALC15_WM_STREAM = (ADDR)stream_calc15_wm;
  *ADDR_CALC15_BS = (ADDR)bs;
  *FLAGS_CALC15 = DEV_INIT;
  *ADDR_WM_CALC16_STREAM = (ADDR)stream_wm_calc16;
  *ADDR_CALC16_WM_STREAM = (ADDR)stream_calc16_wm;
  *ADDR_CALC16_BS = (ADDR)bs;
  *FLAGS_CALC16 = DEV_INIT;
  *ADDR_WM_CALC17_STREAM = (ADDR)stream_wm_calc17;
  *ADDR_CALC17_WM_STREAM = (ADDR)stream_calc17_wm;
  *ADDR_CALC17_BS = (ADDR)bs;
  *FLAGS_CALC17 = DEV_INIT;
  *ADDR_WM_CALC18_STREAM = (ADDR)stream_wm_calc18;
  *ADDR_CALC18_WM_STREAM = (ADDR)stream_calc18_wm;
  *ADDR_CALC18_BS = (ADDR)bs;
  *FLAGS_CALC18 = DEV_INIT;
  *ADDR_WM_CALC19_STREAM = (ADDR)stream_wm_calc19;
  *ADDR_CALC19_WM_STREAM = (ADDR)stream_calc19_wm;
  *ADDR_CALC19_BS = (ADDR)bs;
  *FLAGS_CALC19 = DEV_INIT;
  *ADDR_WM_CALC20_STREAM = (ADDR)stream_wm_calc20;
  *ADDR_CALC20_WM_STREAM = (ADDR)stream_calc20_wm;
  *ADDR_CALC20_BS = (ADDR)bs;
  *FLAGS_CALC20 = DEV_INIT;
  *ADDR_WM_CALC21_STREAM = (ADDR)stream_wm_calc21;
  *ADDR_CALC21_WM_STREAM = (ADDR)stream_calc21_wm;
  *ADDR_CALC21_BS = (ADDR)bs;
  *FLAGS_CALC21 = DEV_INIT;
  *ADDR_WM_CALC22_STREAM = (ADDR)stream_wm_calc22;
  *ADDR_CALC22_WM_STREAM = (ADDR)stream_calc22_wm;
  *ADDR_CALC22_BS = (ADDR)bs;
  *FLAGS_CALC22 = DEV_INIT;
  *ADDR_WM_CALC23_STREAM = (ADDR)stream_wm_calc23;
  *ADDR_CALC23_WM_STREAM = (ADDR)stream_calc23_wm;
  *ADDR_CALC23_BS = (ADDR)bs;
  *FLAGS_CALC23 = DEV_INIT;
  *ADDR_WM_CALC24_STREAM = (ADDR)stream_wm_calc24;
  *ADDR_CALC24_WM_STREAM = (ADDR)stream_calc24_wm;
  *ADDR_CALC24_BS = (ADDR)bs;
  *FLAGS_CALC24 = DEV_INIT;
  *ADDR_WM_CALC25_STREAM = (ADDR)stream_wm_calc25;
  *ADDR_CALC25_WM_STREAM = (ADDR)stream_calc25_wm;
  *ADDR_CALC25_BS = (ADDR)bs;
  *FLAGS_CALC25 = DEV_INIT;
  *ADDR_WM_CALC26_STREAM = (ADDR)stream_wm_calc26;
  *ADDR_CALC26_WM_STREAM = (ADDR)stream_calc26_wm;
  *ADDR_CALC26_BS = (ADDR)bs;
  *FLAGS_CALC26 = DEV_INIT;
  *ADDR_WM_CALC27_STREAM = (ADDR)stream_wm_calc27;
  *ADDR_CALC27_WM_STREAM = (ADDR)stream_calc27_wm;
  *ADDR_CALC27_BS = (ADDR)bs;
  *FLAGS_CALC27 = DEV_INIT;
  *ADDR_WM_CALC28_STREAM = (ADDR)stream_wm_calc28;
  *ADDR_CALC28_WM_STREAM = (ADDR)stream_calc28_wm;
  *ADDR_CALC28_BS = (ADDR)bs;
  *FLAGS_CALC28 = DEV_INIT;
  *ADDR_WM_CALC29_STREAM = (ADDR)stream_wm_calc29;
  *ADDR_CALC29_WM_STREAM = (ADDR)stream_calc29_wm;
  *ADDR_CALC29_BS = (ADDR)bs;
  *FLAGS_CALC29 = DEV_INIT;
  *ADDR_WM_CALC30_STREAM = (ADDR)stream_wm_calc30;
  *ADDR_CALC30_WM_STREAM = (ADDR)stream_calc30_wm;
  *ADDR_CALC30_BS = (ADDR)bs;
  *FLAGS_CALC30 = DEV_INIT;
  *ADDR_WM_CALC31_STREAM = (ADDR)stream_wm_calc31;
  *ADDR_CALC31_WM_STREAM = (ADDR)stream_calc31_wm;
  *ADDR_CALC31_BS = (ADDR)bs;
  *FLAGS_CALC31 = DEV_INIT;
  *ADDR_WM_CALC32_STREAM = (ADDR)stream_wm_calc32;
  *ADDR_CALC32_WM_STREAM = (ADDR)stream_calc32_wm;
  *ADDR_CALC32_BS = (ADDR)bs;
  *FLAGS_CALC32 = DEV_INIT;
  *ADDR_WM_CALC33_STREAM = (ADDR)stream_wm_calc33;
  *ADDR_CALC33_WM_STREAM = (ADDR)stream_calc33_wm;
  *ADDR_CALC33_BS = (ADDR)bs;
  *FLAGS_CALC33 = DEV_INIT;
  *ADDR_WM_CALC34_STREAM = (ADDR)stream_wm_calc34;
  *ADDR_CALC34_WM_STREAM = (ADDR)stream_calc34_wm;
  *ADDR_CALC34_BS = (ADDR)bs;
  *FLAGS_CALC34 = DEV_INIT;
  *ADDR_WM_CALC35_STREAM = (ADDR)stream_wm_calc35;
  *ADDR_CALC35_WM_STREAM = (ADDR)stream_calc35_wm;
  *ADDR_CALC35_BS = (ADDR)bs;
  *FLAGS_CALC35 = DEV_INIT;
  *ADDR_WM_CALC36_STREAM = (ADDR)stream_wm_calc36;
  *ADDR_CALC36_WM_STREAM = (ADDR)stream_calc36_wm;
  *ADDR_CALC36_BS = (ADDR)bs;
  *FLAGS_CALC36 = DEV_INIT;
  *ADDR_WM_CALC37_STREAM = (ADDR)stream_wm_calc37;
  *ADDR_CALC37_WM_STREAM = (ADDR)stream_calc37_wm;
  *ADDR_CALC37_BS = (ADDR)bs;
  *FLAGS_CALC37 = DEV_INIT;
  *ADDR_WM_CALC38_STREAM = (ADDR)stream_wm_calc38;
  *ADDR_CALC38_WM_STREAM = (ADDR)stream_calc38_wm;
  *ADDR_CALC38_BS = (ADDR)bs;
  *FLAGS_CALC38 = DEV_INIT;
  *ADDR_WM_CALC39_STREAM = (ADDR)stream_wm_calc39;
  *ADDR_CALC39_WM_STREAM = (ADDR)stream_calc39_wm;
  *ADDR_CALC39_BS = (ADDR)bs;
  *FLAGS_CALC39 = DEV_INIT;
  *ADDR_WM_CALC40_STREAM = (ADDR)stream_wm_calc40;
  *ADDR_CALC40_WM_STREAM = (ADDR)stream_calc40_wm;
  *ADDR_CALC40_BS = (ADDR)bs;
  *FLAGS_CALC40 = DEV_INIT;
  *ADDR_WM_CALC41_STREAM = (ADDR)stream_wm_calc41;
  *ADDR_CALC41_WM_STREAM = (ADDR)stream_calc41_wm;
  *ADDR_CALC41_BS = (ADDR)bs;
  *FLAGS_CALC41 = DEV_INIT;
  *ADDR_WM_CALC42_STREAM = (ADDR)stream_wm_calc42;
  *ADDR_CALC42_WM_STREAM = (ADDR)stream_calc42_wm;
  *ADDR_CALC42_BS = (ADDR)bs;
  *FLAGS_CALC42 = DEV_INIT;
  *ADDR_WM_CALC43_STREAM = (ADDR)stream_wm_calc43;
  *ADDR_CALC43_WM_STREAM = (ADDR)stream_calc43_wm;
  *ADDR_CALC43_BS = (ADDR)bs;
  *FLAGS_CALC43 = DEV_INIT;
  *ADDR_WM_CALC44_STREAM = (ADDR)stream_wm_calc44;
  *ADDR_CALC44_WM_STREAM = (ADDR)stream_calc44_wm;
  *ADDR_CALC44_BS = (ADDR)bs;
  *FLAGS_CALC44 = DEV_INIT;
  *ADDR_WM_CALC45_STREAM = (ADDR)stream_wm_calc45;
  *ADDR_CALC45_WM_STREAM = (ADDR)stream_calc45_wm;
  *ADDR_CALC45_BS = (ADDR)bs;
  *FLAGS_CALC45 = DEV_INIT;
  *ADDR_WM_CALC46_STREAM = (ADDR)stream_wm_calc46;
  *ADDR_CALC46_WM_STREAM = (ADDR)stream_calc46_wm;
  *ADDR_CALC46_BS = (ADDR)bs;
  *FLAGS_CALC46 = DEV_INIT;
  *ADDR_WM_CALC47_STREAM = (ADDR)stream_wm_calc47;
  *ADDR_CALC47_WM_STREAM = (ADDR)stream_calc47_wm;
  *ADDR_CALC47_BS = (ADDR)bs;
  *FLAGS_CALC47 = DEV_INIT;
  *ADDR_WM_CALC48_STREAM = (ADDR)stream_wm_calc48;
  *ADDR_CALC48_WM_STREAM = (ADDR)stream_calc48_wm;
  *ADDR_CALC48_BS = (ADDR)bs;
  *FLAGS_CALC48 = DEV_INIT;
  *ADDR_WM_CALC49_STREAM = (ADDR)stream_wm_calc49;
  *ADDR_CALC49_WM_STREAM = (ADDR)stream_calc49_wm;
  *ADDR_CALC49_BS = (ADDR)bs;
  *FLAGS_CALC49 = DEV_INIT;
  *ADDR_WM_CALC50_STREAM = (ADDR)stream_wm_calc50;
  *ADDR_CALC50_WM_STREAM = (ADDR)stream_calc50_wm;
  *ADDR_CALC50_BS = (ADDR)bs;
  *FLAGS_CALC50 = DEV_INIT;
  *ADDR_WM_CALC51_STREAM = (ADDR)stream_wm_calc51;
  *ADDR_CALC51_WM_STREAM = (ADDR)stream_calc51_wm;
  *ADDR_CALC51_BS = (ADDR)bs;
  *FLAGS_CALC51 = DEV_INIT;
  *ADDR_WM_CALC52_STREAM = (ADDR)stream_wm_calc52;
  *ADDR_CALC52_WM_STREAM = (ADDR)stream_calc52_wm;
  *ADDR_CALC52_BS = (ADDR)bs;
  *FLAGS_CALC52 = DEV_INIT;
  *ADDR_WM_CALC53_STREAM = (ADDR)stream_wm_calc53;
  *ADDR_CALC53_WM_STREAM = (ADDR)stream_calc53_wm;
  *ADDR_CALC53_BS = (ADDR)bs;
  *FLAGS_CALC53 = DEV_INIT;
  *ADDR_WM_CALC54_STREAM = (ADDR)stream_wm_calc54;
  *ADDR_CALC54_WM_STREAM = (ADDR)stream_calc54_wm;
  *ADDR_CALC54_BS = (ADDR)bs;
  *FLAGS_CALC54 = DEV_INIT;
  *ADDR_WM_CALC55_STREAM = (ADDR)stream_wm_calc55;
  *ADDR_CALC55_WM_STREAM = (ADDR)stream_calc55_wm;
  *ADDR_CALC55_BS = (ADDR)bs;
  *FLAGS_CALC55 = DEV_INIT;
  *ADDR_WM_CALC56_STREAM = (ADDR)stream_wm_calc56;
  *ADDR_CALC56_WM_STREAM = (ADDR)stream_calc56_wm;
  *ADDR_CALC56_BS = (ADDR)bs;
  *FLAGS_CALC56 = DEV_INIT;
  *ADDR_WM_CALC57_STREAM = (ADDR)stream_wm_calc57;
  *ADDR_CALC57_WM_STREAM = (ADDR)stream_calc57_wm;
  *ADDR_CALC57_BS = (ADDR)bs;
  *FLAGS_CALC57 = DEV_INIT;
  *ADDR_WM_CALC58_STREAM = (ADDR)stream_wm_calc58;
  *ADDR_CALC58_WM_STREAM = (ADDR)stream_calc58_wm;
  *ADDR_CALC58_BS = (ADDR)bs;
  *FLAGS_CALC58 = DEV_INIT;
  *ADDR_WM_CALC59_STREAM = (ADDR)stream_wm_calc59;
  *ADDR_CALC59_WM_STREAM = (ADDR)stream_calc59_wm;
  *ADDR_CALC59_BS = (ADDR)bs;
  *FLAGS_CALC59 = DEV_INIT;
  *ADDR_WM_CALC60_STREAM = (ADDR)stream_wm_calc60;
  *ADDR_CALC60_WM_STREAM = (ADDR)stream_calc60_wm;
  *ADDR_CALC60_BS = (ADDR)bs;
  *FLAGS_CALC60 = DEV_INIT;
  *ADDR_WM_CALC61_STREAM = (ADDR)stream_wm_calc61;
  *ADDR_CALC61_WM_STREAM = (ADDR)stream_calc61_wm;
  *ADDR_CALC61_BS = (ADDR)bs;
  *FLAGS_CALC61 = DEV_INIT;
  *ADDR_WM_CALC62_STREAM = (ADDR)stream_wm_calc62;
  *ADDR_CALC62_WM_STREAM = (ADDR)stream_calc62_wm;
  *ADDR_CALC62_BS = (ADDR)bs;
  *FLAGS_CALC62 = DEV_INIT;
  *ADDR_WM_CALC63_STREAM = (ADDR)stream_wm_calc63;
  *ADDR_CALC63_WM_STREAM = (ADDR)stream_calc63_wm;
  *ADDR_CALC63_BS = (ADDR)bs;
  *FLAGS_CALC63 = DEV_INIT;
  *ADDR_WM_CALC64_STREAM = (ADDR)stream_wm_calc64;
  *ADDR_CALC64_WM_STREAM = (ADDR)stream_calc64_wm;
  *ADDR_CALC64_BS = (ADDR)bs;
  *FLAGS_CALC64 = DEV_INIT;
  *ADDR_WM_CALC65_STREAM = (ADDR)stream_wm_calc65;
  *ADDR_CALC65_WM_STREAM = (ADDR)stream_calc65_wm;
  *ADDR_CALC65_BS = (ADDR)bs;
  *FLAGS_CALC65 = DEV_INIT;
  *ADDR_WM_CALC66_STREAM = (ADDR)stream_wm_calc66;
  *ADDR_CALC66_WM_STREAM = (ADDR)stream_calc66_wm;
  *ADDR_CALC66_BS = (ADDR)bs;
  *FLAGS_CALC66 = DEV_INIT;
  *ADDR_WM_CALC67_STREAM = (ADDR)stream_wm_calc67;
  *ADDR_CALC67_WM_STREAM = (ADDR)stream_calc67_wm;
  *ADDR_CALC67_BS = (ADDR)bs;
  *FLAGS_CALC67 = DEV_INIT;
  *ADDR_WM_CALC68_STREAM = (ADDR)stream_wm_calc68;
  *ADDR_CALC68_WM_STREAM = (ADDR)stream_calc68_wm;
  *ADDR_CALC68_BS = (ADDR)bs;
  *FLAGS_CALC68 = DEV_INIT;
  *ADDR_WM_CALC69_STREAM = (ADDR)stream_wm_calc69;
  *ADDR_CALC69_WM_STREAM = (ADDR)stream_calc69_wm;
  *ADDR_CALC69_BS = (ADDR)bs;
  *FLAGS_CALC69 = DEV_INIT;
  *ADDR_WM_CALC70_STREAM = (ADDR)stream_wm_calc70;
  *ADDR_CALC70_WM_STREAM = (ADDR)stream_calc70_wm;
  *ADDR_CALC70_BS = (ADDR)bs;
  *FLAGS_CALC70 = DEV_INIT;
  *ADDR_WM_CALC71_STREAM = (ADDR)stream_wm_calc71;
  *ADDR_CALC71_WM_STREAM = (ADDR)stream_calc71_wm;
  *ADDR_CALC71_BS = (ADDR)bs;
  *FLAGS_CALC71 = DEV_INIT;
  *ADDR_WM_CALC72_STREAM = (ADDR)stream_wm_calc72;
  *ADDR_CALC72_WM_STREAM = (ADDR)stream_calc72_wm;
  *ADDR_CALC72_BS = (ADDR)bs;
  *FLAGS_CALC72 = DEV_INIT;
  *ADDR_WM_CALC73_STREAM = (ADDR)stream_wm_calc73;
  *ADDR_CALC73_WM_STREAM = (ADDR)stream_calc73_wm;
  *ADDR_CALC73_BS = (ADDR)bs;
  *FLAGS_CALC73 = DEV_INIT;
  *ADDR_WM_CALC74_STREAM = (ADDR)stream_wm_calc74;
  *ADDR_CALC74_WM_STREAM = (ADDR)stream_calc74_wm;
  *ADDR_CALC74_BS = (ADDR)bs;
  *FLAGS_CALC74 = DEV_INIT;
  *ADDR_WM_CALC75_STREAM = (ADDR)stream_wm_calc75;
  *ADDR_CALC75_WM_STREAM = (ADDR)stream_calc75_wm;
  *ADDR_CALC75_BS = (ADDR)bs;
  *FLAGS_CALC75 = DEV_INIT;
  *ADDR_WM_CALC76_STREAM = (ADDR)stream_wm_calc76;
  *ADDR_CALC76_WM_STREAM = (ADDR)stream_calc76_wm;
  *ADDR_CALC76_BS = (ADDR)bs;
  *FLAGS_CALC76 = DEV_INIT;
  *ADDR_WM_CALC77_STREAM = (ADDR)stream_wm_calc77;
  *ADDR_CALC77_WM_STREAM = (ADDR)stream_calc77_wm;
  *ADDR_CALC77_BS = (ADDR)bs;
  *FLAGS_CALC77 = DEV_INIT;
  *ADDR_WM_CALC78_STREAM = (ADDR)stream_wm_calc78;
  *ADDR_CALC78_WM_STREAM = (ADDR)stream_calc78_wm;
  *ADDR_CALC78_BS = (ADDR)bs;
  *FLAGS_CALC78 = DEV_INIT;
  *ADDR_WM_CALC79_STREAM = (ADDR)stream_wm_calc79;
  *ADDR_CALC79_WM_STREAM = (ADDR)stream_calc79_wm;
  *ADDR_CALC79_BS = (ADDR)bs;
  *FLAGS_CALC79 = DEV_INIT;
  *ADDR_WM_CALC80_STREAM = (ADDR)stream_wm_calc80;
  *ADDR_CALC80_WM_STREAM = (ADDR)stream_calc80_wm;
  *ADDR_CALC80_BS = (ADDR)bs;
  *FLAGS_CALC80 = DEV_INIT;
  *ADDR_WM_CALC81_STREAM = (ADDR)stream_wm_calc81;
  *ADDR_CALC81_WM_STREAM = (ADDR)stream_calc81_wm;
  *ADDR_CALC81_BS = (ADDR)bs;
  *FLAGS_CALC81 = DEV_INIT;
  *ADDR_WM_CALC82_STREAM = (ADDR)stream_wm_calc82;
  *ADDR_CALC82_WM_STREAM = (ADDR)stream_calc82_wm;
  *ADDR_CALC82_BS = (ADDR)bs;
  *FLAGS_CALC82 = DEV_INIT;
  *ADDR_WM_CALC83_STREAM = (ADDR)stream_wm_calc83;
  *ADDR_CALC83_WM_STREAM = (ADDR)stream_calc83_wm;
  *ADDR_CALC83_BS = (ADDR)bs;
  *FLAGS_CALC83 = DEV_INIT;
  *ADDR_WM_CALC84_STREAM = (ADDR)stream_wm_calc84;
  *ADDR_CALC84_WM_STREAM = (ADDR)stream_calc84_wm;
  *ADDR_CALC84_BS = (ADDR)bs;
  *FLAGS_CALC84 = DEV_INIT;
  *ADDR_WM_CALC85_STREAM = (ADDR)stream_wm_calc85;
  *ADDR_CALC85_WM_STREAM = (ADDR)stream_calc85_wm;
  *ADDR_CALC85_BS = (ADDR)bs;
  *FLAGS_CALC85 = DEV_INIT;
  *ADDR_WM_CALC86_STREAM = (ADDR)stream_wm_calc86;
  *ADDR_CALC86_WM_STREAM = (ADDR)stream_calc86_wm;
  *ADDR_CALC86_BS = (ADDR)bs;
  *FLAGS_CALC86 = DEV_INIT;
  *ADDR_WM_CALC87_STREAM = (ADDR)stream_wm_calc87;
  *ADDR_CALC87_WM_STREAM = (ADDR)stream_calc87_wm;
  *ADDR_CALC87_BS = (ADDR)bs;
  *FLAGS_CALC87 = DEV_INIT;
  *ADDR_WM_CALC88_STREAM = (ADDR)stream_wm_calc88;
  *ADDR_CALC88_WM_STREAM = (ADDR)stream_calc88_wm;
  *ADDR_CALC88_BS = (ADDR)bs;
  *FLAGS_CALC88 = DEV_INIT;
  *ADDR_WM_CALC89_STREAM = (ADDR)stream_wm_calc89;
  *ADDR_CALC89_WM_STREAM = (ADDR)stream_calc89_wm;
  *ADDR_CALC89_BS = (ADDR)bs;
  *FLAGS_CALC89 = DEV_INIT;
  *ADDR_WM_CALC90_STREAM = (ADDR)stream_wm_calc90;
  *ADDR_CALC90_WM_STREAM = (ADDR)stream_calc90_wm;
  *ADDR_CALC90_BS = (ADDR)bs;
  *FLAGS_CALC90 = DEV_INIT;
  *ADDR_WM_CALC91_STREAM = (ADDR)stream_wm_calc91;
  *ADDR_CALC91_WM_STREAM = (ADDR)stream_calc91_wm;
  *ADDR_CALC91_BS = (ADDR)bs;
  *FLAGS_CALC91 = DEV_INIT;
  *ADDR_WM_CALC92_STREAM = (ADDR)stream_wm_calc92;
  *ADDR_CALC92_WM_STREAM = (ADDR)stream_calc92_wm;
  *ADDR_CALC92_BS = (ADDR)bs;
  *FLAGS_CALC92 = DEV_INIT;
  *ADDR_WM_CALC93_STREAM = (ADDR)stream_wm_calc93;
  *ADDR_CALC93_WM_STREAM = (ADDR)stream_calc93_wm;
  *ADDR_CALC93_BS = (ADDR)bs;
  *FLAGS_CALC93 = DEV_INIT;
  *ADDR_WM_CALC94_STREAM = (ADDR)stream_wm_calc94;
  *ADDR_CALC94_WM_STREAM = (ADDR)stream_calc94_wm;
  *ADDR_CALC94_BS = (ADDR)bs;
  *FLAGS_CALC94 = DEV_INIT;
  *ADDR_WM_CALC95_STREAM = (ADDR)stream_wm_calc95;
  *ADDR_CALC95_WM_STREAM = (ADDR)stream_calc95_wm;
  *ADDR_CALC95_BS = (ADDR)bs;
  *FLAGS_CALC95 = DEV_INIT;
  *ADDR_WM_CALC96_STREAM = (ADDR)stream_wm_calc96;
  *ADDR_CALC96_WM_STREAM = (ADDR)stream_calc96_wm;
  *ADDR_CALC96_BS = (ADDR)bs;
  *FLAGS_CALC96 = DEV_INIT;
  *ADDR_WM_CALC97_STREAM = (ADDR)stream_wm_calc97;
  *ADDR_CALC97_WM_STREAM = (ADDR)stream_calc97_wm;
  *ADDR_CALC97_BS = (ADDR)bs;
  *FLAGS_CALC97 = DEV_INIT;
  *ADDR_WM_CALC98_STREAM = (ADDR)stream_wm_calc98;
  *ADDR_CALC98_WM_STREAM = (ADDR)stream_calc98_wm;
  *ADDR_CALC98_BS = (ADDR)bs;
  *FLAGS_CALC98 = DEV_INIT;
  *ADDR_WM_CALC99_STREAM = (ADDR)stream_wm_calc99;
  *ADDR_CALC99_WM_STREAM = (ADDR)stream_calc99_wm;
  *ADDR_CALC99_BS = (ADDR)bs;
  *FLAGS_CALC99 = DEV_INIT;
  *ADDR_WM_CALC100_STREAM = (ADDR)stream_wm_calc100;
  *ADDR_CALC100_WM_STREAM = (ADDR)stream_calc100_wm;
  *ADDR_CALC100_BS = (ADDR)bs;
  *FLAGS_CALC100 = DEV_INIT;
  *ADDR_WM_CALC101_STREAM = (ADDR)stream_wm_calc101;
  *ADDR_CALC101_WM_STREAM = (ADDR)stream_calc101_wm;
  *ADDR_CALC101_BS = (ADDR)bs;
  *FLAGS_CALC101 = DEV_INIT;
  *ADDR_WM_CALC102_STREAM = (ADDR)stream_wm_calc102;
  *ADDR_CALC102_WM_STREAM = (ADDR)stream_calc102_wm;
  *ADDR_CALC102_BS = (ADDR)bs;
  *FLAGS_CALC102 = DEV_INIT;
  *ADDR_WM_CALC103_STREAM = (ADDR)stream_wm_calc103;
  *ADDR_CALC103_WM_STREAM = (ADDR)stream_calc103_wm;
  *ADDR_CALC103_BS = (ADDR)bs;
  *FLAGS_CALC103 = DEV_INIT;
  *ADDR_WM_CALC104_STREAM = (ADDR)stream_wm_calc104;
  *ADDR_CALC104_WM_STREAM = (ADDR)stream_calc104_wm;
  *ADDR_CALC104_BS = (ADDR)bs;
  *FLAGS_CALC104 = DEV_INIT;
  *ADDR_WM_CALC105_STREAM = (ADDR)stream_wm_calc105;
  *ADDR_CALC105_WM_STREAM = (ADDR)stream_calc105_wm;
  *ADDR_CALC105_BS = (ADDR)bs;
  *FLAGS_CALC105 = DEV_INIT;
  *ADDR_WM_CALC106_STREAM = (ADDR)stream_wm_calc106;
  *ADDR_CALC106_WM_STREAM = (ADDR)stream_calc106_wm;
  *ADDR_CALC106_BS = (ADDR)bs;
  *FLAGS_CALC106 = DEV_INIT;
  *ADDR_WM_CALC107_STREAM = (ADDR)stream_wm_calc107;
  *ADDR_CALC107_WM_STREAM = (ADDR)stream_calc107_wm;
  *ADDR_CALC107_BS = (ADDR)bs;
  *FLAGS_CALC107 = DEV_INIT;
  *ADDR_WM_CALC108_STREAM = (ADDR)stream_wm_calc108;
  *ADDR_CALC108_WM_STREAM = (ADDR)stream_calc108_wm;
  *ADDR_CALC108_BS = (ADDR)bs;
  *FLAGS_CALC108 = DEV_INIT;
  *ADDR_WM_CALC109_STREAM = (ADDR)stream_wm_calc109;
  *ADDR_CALC109_WM_STREAM = (ADDR)stream_calc109_wm;
  *ADDR_CALC109_BS = (ADDR)bs;
  *FLAGS_CALC109 = DEV_INIT;
  *ADDR_WM_CALC110_STREAM = (ADDR)stream_wm_calc110;
  *ADDR_CALC110_WM_STREAM = (ADDR)stream_calc110_wm;
  *ADDR_CALC110_BS = (ADDR)bs;
  *FLAGS_CALC110 = DEV_INIT;
  *ADDR_WM_CALC111_STREAM = (ADDR)stream_wm_calc111;
  *ADDR_CALC111_WM_STREAM = (ADDR)stream_calc111_wm;
  *ADDR_CALC111_BS = (ADDR)bs;
  *FLAGS_CALC111 = DEV_INIT;
  *ADDR_WM_CALC112_STREAM = (ADDR)stream_wm_calc112;
  *ADDR_CALC112_WM_STREAM = (ADDR)stream_calc112_wm;
  *ADDR_CALC112_BS = (ADDR)bs;
  *FLAGS_CALC112 = DEV_INIT;
  *ADDR_WM_CALC113_STREAM = (ADDR)stream_wm_calc113;
  *ADDR_CALC113_WM_STREAM = (ADDR)stream_calc113_wm;
  *ADDR_CALC113_BS = (ADDR)bs;
  *FLAGS_CALC113 = DEV_INIT;
  *ADDR_WM_CALC114_STREAM = (ADDR)stream_wm_calc114;
  *ADDR_CALC114_WM_STREAM = (ADDR)stream_calc114_wm;
  *ADDR_CALC114_BS = (ADDR)bs;
  *FLAGS_CALC114 = DEV_INIT;
  *ADDR_WM_CALC115_STREAM = (ADDR)stream_wm_calc115;
  *ADDR_CALC115_WM_STREAM = (ADDR)stream_calc115_wm;
  *ADDR_CALC115_BS = (ADDR)bs;
  *FLAGS_CALC115 = DEV_INIT;
  *ADDR_WM_CALC116_STREAM = (ADDR)stream_wm_calc116;
  *ADDR_CALC116_WM_STREAM = (ADDR)stream_calc116_wm;
  *ADDR_CALC116_BS = (ADDR)bs;
  *FLAGS_CALC116 = DEV_INIT;
  *ADDR_WM_CALC117_STREAM = (ADDR)stream_wm_calc117;
  *ADDR_CALC117_WM_STREAM = (ADDR)stream_calc117_wm;
  *ADDR_CALC117_BS = (ADDR)bs;
  *FLAGS_CALC117 = DEV_INIT;
  *ADDR_WM_CALC118_STREAM = (ADDR)stream_wm_calc118;
  *ADDR_CALC118_WM_STREAM = (ADDR)stream_calc118_wm;
  *ADDR_CALC118_BS = (ADDR)bs;
  *FLAGS_CALC118 = DEV_INIT;
  *ADDR_WM_CALC119_STREAM = (ADDR)stream_wm_calc119;
  *ADDR_CALC119_WM_STREAM = (ADDR)stream_calc119_wm;
  *ADDR_CALC119_BS = (ADDR)bs;
  *FLAGS_CALC119 = DEV_INIT;
  *ADDR_WM_CALC120_STREAM = (ADDR)stream_wm_calc120;
  *ADDR_CALC120_WM_STREAM = (ADDR)stream_calc120_wm;
  *ADDR_CALC120_BS = (ADDR)bs;
  *FLAGS_CALC120 = DEV_INIT;
  *ADDR_WM_CALC121_STREAM = (ADDR)stream_wm_calc121;
  *ADDR_CALC121_WM_STREAM = (ADDR)stream_calc121_wm;
  *ADDR_CALC121_BS = (ADDR)bs;
  *FLAGS_CALC121 = DEV_INIT;
  *ADDR_WM_CALC122_STREAM = (ADDR)stream_wm_calc122;
  *ADDR_CALC122_WM_STREAM = (ADDR)stream_calc122_wm;
  *ADDR_CALC122_BS = (ADDR)bs;
  *FLAGS_CALC122 = DEV_INIT;
  *ADDR_WM_CALC123_STREAM = (ADDR)stream_wm_calc123;
  *ADDR_CALC123_WM_STREAM = (ADDR)stream_calc123_wm;
  *ADDR_CALC123_BS = (ADDR)bs;
  *FLAGS_CALC123 = DEV_INIT;
  *ADDR_WM_CALC124_STREAM = (ADDR)stream_wm_calc124;
  *ADDR_CALC124_WM_STREAM = (ADDR)stream_calc124_wm;
  *ADDR_CALC124_BS = (ADDR)bs;
  *FLAGS_CALC124 = DEV_INIT;
  *ADDR_WM_CALC125_STREAM = (ADDR)stream_wm_calc125;
  *ADDR_CALC125_WM_STREAM = (ADDR)stream_calc125_wm;
  *ADDR_CALC125_BS = (ADDR)bs;
  *FLAGS_CALC125 = DEV_INIT;
  *ADDR_WM_CALC126_STREAM = (ADDR)stream_wm_calc126;
  *ADDR_CALC126_WM_STREAM = (ADDR)stream_calc126_wm;
  *ADDR_CALC126_BS = (ADDR)bs;
  *FLAGS_CALC126 = DEV_INIT;
  *ADDR_WM_CALC127_STREAM = (ADDR)stream_wm_calc127;
  *ADDR_CALC127_WM_STREAM = (ADDR)stream_calc127_wm;
  *ADDR_CALC127_BS = (ADDR)bs;
  *FLAGS_CALC127 = DEV_INIT;
  *ADDR_WM_CALC128_STREAM = (ADDR)stream_wm_calc128;
  *ADDR_CALC128_WM_STREAM = (ADDR)stream_calc128_wm;
  *ADDR_CALC128_BS = (ADDR)bs;
  *FLAGS_CALC128 = DEV_INIT;
  
  while ((*FLAGS_WM & DEV_INTR) != DEV_INTR)
    ;

  return;
}

