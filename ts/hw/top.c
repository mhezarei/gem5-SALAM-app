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
  
  while ((*FLAGS_WM & DEV_INTR) != DEV_INTR)
    ;

  return;
}

