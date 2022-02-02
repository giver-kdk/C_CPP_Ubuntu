#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>
#include <stdio_ext.h>

#define CHAR_LIMIT 100

// Initializing structure globally
struct element
{
	short atomicno;
	char name[50];
	char ec[50];
	short group;
	short period;
	char block;
	float atomicw;
	float en;
	short atomicr;
	char origin[100];
	float meltp;
	float boilp;
	float density;
} elem[115];
void display_table();
void display_data(int i);
void write_data();
void read_data();
void edit_data();
void store_loop();
int count_lines(FILE *fp);
void print_data(char topic[], FILE *fp, int line);
void search_engine(FILE *fp1, char word_group[50][50], int word_num, char file_name[], int new_line);
void split_string(char search[100], char group[50][50], int *num);
void descend_array(int array1[], int array2[], int size);
void dual_lineprint(FILE *fp, int line, int j);

char* strlwr(char x[])					// Defining strlwr() function 
{
  int b;
  for(b=0;x[b]!='\0';b++)
  {
    if(x[b]>='A'&&x[b]<='Z')
    {
      x[b]=x[b]-'A'+'a';
    }
  }
  return x;
}

int main()
{
	int n, a, i, j, k = 100;
	char name[50], c, t;
	// Displaying introduction.
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\tA PROGRAM FOR BEGINNEERS");
	usleep(1000 * 3000); // Freeze program for 3 sec(Defined in windows.h)
	system("clear");

	for (i = 1; i <= 100; ++i)
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tLOADING %d %%\n", i);
		if (i % 2 == 0)
		{
			printf("\t\t\t\t\t\t");
			for (j = 0; j <= i / 2; j++)
			{
				printf("%c", 223);
			}
			for (k = 50 - j; k > 0; k--)
			{
				printf("~");
			}
		}
		if (i == 1)
		{
			usleep(1000 * 1000);
		}
		if (i == 5)
		{
			usleep(1000 * 250);
		}
		if (i == 25)
		{
			usleep(1000 * 400);
		}
		if (i == 60)
		{
			usleep(1000 * 400);
		}
		if (i == 100)
		{
			usleep(1000 * 1000);
		}
		if (i != 100)
		{ // Set the cursor to origin(Acts as smooth screen clear)
			system("clear");
		}
	}
	system("clear");

	// Displaying the modern periodic table.
	display_table();
	system("clear");
	// Initializing atomic numbers.
	for (i = 1; i <= 114; ++i)
	{
		elem[i].atomicno = i;
	}
	// Initializing element names and electronic configurations.
	{
		strcpy(elem[1].name, "Hydrogen- H");
		strcpy(elem[1].ec, "1s1");
		strcpy(elem[2].name, "Helium- He");
		strcpy(elem[2].ec, "1s2");
		strcpy(elem[3].name, "Lithium- Li");
		strcpy(elem[3].ec, "[He] 2s1");
		strcpy(elem[4].name, "Beryllium- Be");
		strcpy(elem[4].ec, "[He] 2s2	");
		strcpy(elem[5].name, "Boron- B");
		strcpy(elem[5].ec, "[He] 2s2 2p1");
		strcpy(elem[6].name, "Carbon- C");
		strcpy(elem[6].ec, "[He] 2s2 2p2");
		strcpy(elem[7].name, "Nitrogen- N");
		strcpy(elem[7].ec, "[He] 2s2 2p3");
		strcpy(elem[8].name, "Oxygen- O");
		strcpy(elem[8].ec, "[He] 2s2 2p4");
		strcpy(elem[9].name, "Fluorine- F");
		strcpy(elem[9].ec, "[He] 2s2 2p5");
		strcpy(elem[10].name, "Neon- Ne");
		strcpy(elem[10].ec, "[He] 2s2 2p6");
		strcpy(elem[11].name, "Sodium- Na");
		strcpy(elem[11].ec, "[Ne] 3s1");
		strcpy(elem[12].name, "Magnesium- Mg");
		strcpy(elem[12].ec, "[Ne] 3s2");
		strcpy(elem[13].name, "Aluminium- Al");
		strcpy(elem[13].ec, "[Ne] 3s2 3p1");
		strcpy(elem[14].name, "Silicon- Si");
		strcpy(elem[14].ec, "[Ne] 3s2 3p2");
		strcpy(elem[15].name, "Phosphorus- P");
		strcpy(elem[15].ec, "[Ne] 3s2 3p3");
		strcpy(elem[16].name, "Sulfur- S");
		strcpy(elem[16].ec, "[Ne] 3s2 3p4");
		strcpy(elem[17].name, "Chlorine- Cl");
		strcpy(elem[17].ec, "[Ne] 3s2 3p5");
		strcpy(elem[18].name, "Argon- Ar");
		strcpy(elem[18].ec, "[Ne] 3s2 3p6");
		strcpy(elem[19].name, "Potassium- K");
		strcpy(elem[19].ec, "[Ar] 4s1");
		strcpy(elem[20].name, "Calcium- Ca");
		strcpy(elem[20].ec, "[Ar] 4s2");
		strcpy(elem[21].name, "Scandium- Sc");
		strcpy(elem[21].ec, "[Ar] 3d1 4s2");
		strcpy(elem[22].name, "Titanium- Ti");
		strcpy(elem[22].ec, "[Ar] 3d2 4s2");
		strcpy(elem[23].name, "Vanadium- V");
		strcpy(elem[23].ec, "[Ar] 3d3 4s2");
		strcpy(elem[24].name, "Chromium- Cr");
		strcpy(elem[24].ec, "[Ar] 3d5 4s1");
		strcpy(elem[25].name, "Manganese- Mn");
		strcpy(elem[25].ec, "[Ar] 3d5 4s2");
		strcpy(elem[26].name, "Iron- Fe");
		strcpy(elem[26].ec, "[Ar] 3d6 4s2");
		strcpy(elem[27].name, "Cobalt- Co");
		strcpy(elem[27].ec, "[Ar] 3d7 4s2");
		strcpy(elem[28].name, "Nickel- Ni");
		strcpy(elem[28].ec, "[Ar] 3d8 4s2");
		strcpy(elem[29].name, "Copper- Cu");
		strcpy(elem[29].ec, "[Ar] 3d10 4s1");
		strcpy(elem[30].name, "Zinc- Zn");
		strcpy(elem[30].ec, "[Ar] 3d10 4s2");
		strcpy(elem[31].name, "Gallium- Ga");
		strcpy(elem[31].ec, "[Ar] 3d10 4s2 4p1");
		strcpy(elem[32].name, "Germanium- Ge");
		strcpy(elem[32].ec, "[Ar] 3d10 4s2 4p2");
		strcpy(elem[33].name, "Arsenic- As");
		strcpy(elem[33].ec, "[Ar] 3d10 4s2 4p3");
		strcpy(elem[34].name, "Selenium- Se");
		strcpy(elem[34].ec, "[Ar] 3d10 4s2 4p4");
		strcpy(elem[35].name, "Bromine- Br");
		strcpy(elem[35].ec, "[Ar] 3d10 4s2 4p5	");
		strcpy(elem[36].name, "Krypton- Kr");
		strcpy(elem[36].ec, "[Ar] 3d10 4s2 4p6	");
		strcpy(elem[37].name, "Rubidium- Rb");
		strcpy(elem[37].ec, "[Kr] 5s1");
		strcpy(elem[38].name, "Strontium- Sr");
		strcpy(elem[38].ec, "[Kr] 5s2");
		strcpy(elem[39].name, "Yttrium- Y");
		strcpy(elem[39].ec, "[Kr] 4d1 5s2");
		strcpy(elem[40].name, "Zirconium- Zr");
		strcpy(elem[40].ec, "[Kr] 4d2 5s2");
		strcpy(elem[41].name, "Niobium- Nb");
		strcpy(elem[41].ec, "[Kr] 4d4 5s1");
		strcpy(elem[42].name, "Molybdenum- Mo");
		strcpy(elem[42].ec, "[Kr] 4d5 5s1");
		strcpy(elem[43].name, "Technetium- Tc");
		strcpy(elem[43].ec, "[Kr] 4d5 5s2");
		strcpy(elem[44].name, "Ruthenium- Ru");
		strcpy(elem[44].ec, "[Kr] 4d7 5s1");
		strcpy(elem[45].name, "Rhodium- Rh");
		strcpy(elem[45].ec, "[Kr] 4d8 5s1");
		strcpy(elem[46].name, "Palladium- Pd");
		strcpy(elem[46].ec, "[Kr] 4d10");
		strcpy(elem[47].name, "Silver- Ag");
		strcpy(elem[47].ec, "[Kr] 4d10 5s1");
		strcpy(elem[48].name, "Cadmium- Cd");
		strcpy(elem[48].ec, "[Kr] 4d10 5s2");
		strcpy(elem[49].name, "Indium- In");
		strcpy(elem[49].ec, "[Kr] 4d10 5s2 5p1");
		strcpy(elem[50].name, "Tin- Sn");
		strcpy(elem[50].ec, "[Kr] 4d10 5s2 5p2");
		strcpy(elem[51].name, "Antimony- Sb");
		strcpy(elem[51].ec, "[Kr] 4d10 5s2 5p3");
		strcpy(elem[52].name, "Tellurium- Te");
		strcpy(elem[52].ec, "[Kr] 4d10 5s2 5p4");
		strcpy(elem[53].name, "Iodine- I");
		strcpy(elem[53].ec, "[Kr] 4d10 5s2 5p5");
		strcpy(elem[54].name, "Xenon- Xe");
		strcpy(elem[54].ec, "[Kr] 4d10 5s2 5p6");
		strcpy(elem[55].name, "Caesium- Cs");
		strcpy(elem[55].ec, "[Xe] 6s1");
		strcpy(elem[56].name, "Barium- Ba");
		strcpy(elem[56].ec, "[Xe] 6s2");
		strcpy(elem[57].name, "Lanthanum- La");
		strcpy(elem[57].ec, "[Xe] 5d1 6s2");
		strcpy(elem[58].name, "Cerium- Ce");
		strcpy(elem[58].ec, "[Xe] 4f1 5d1 6s2");
		strcpy(elem[59].name, "Praseodymium- Pr");
		strcpy(elem[59].ec, "[Xe] 4f3 6s2");
		strcpy(elem[60].name, "Neodymium- Nd");
		strcpy(elem[60].ec, "[Xe] 4f4 6s2");
		strcpy(elem[61].name, "Promethium- Pm");
		strcpy(elem[61].ec, "[Xe] 4f5 6s2");
		strcpy(elem[62].name, "Samarium- Sm");
		strcpy(elem[62].ec, "[Xe] 4f6 6s2");
		strcpy(elem[63].name, "Europium- Eu");
		strcpy(elem[63].ec, "[Xe] 4f7 6s2");
		strcpy(elem[64].name, "Gadolinium- Gd");
		strcpy(elem[64].ec, "[Xe] 4f7 5d1 6s2");
		strcpy(elem[65].name, "Terbium- Tb");
		strcpy(elem[65].ec, "[Xe] 4f9 6s2");
		strcpy(elem[66].name, "Dysprosium- Dy");
		strcpy(elem[66].ec, "[Xe] 4f10 6s2");
		strcpy(elem[67].name, "Holmium- Ho");
		strcpy(elem[67].ec, "[Xe] 4f11 6s2");
		strcpy(elem[68].name, "Erbium- Er");
		strcpy(elem[68].ec, "[Xe] 4f12 6s2");
		strcpy(elem[69].name, "Thulium- Tm");
		strcpy(elem[69].ec, "[Xe] 4f13 6s2");
		strcpy(elem[70].name, "Ytterbium- Yb");
		strcpy(elem[70].ec, "[Xe] 4f14 6s2");
		strcpy(elem[71].name, "Lutetium- Lu");
		strcpy(elem[71].ec, "[Xe] 4f14 5d1 6s2");
		strcpy(elem[72].name, "Hafnium- Hf");
		strcpy(elem[72].ec, "[Xe] 4f14 5d2 6s2");
		strcpy(elem[73].name, "Tantalum- Ta");
		strcpy(elem[73].ec, "[Xe] 4f14 5d3 6s2");
		strcpy(elem[74].name, "Tungsten- W");
		strcpy(elem[74].ec, "[Xe] 4f14 5d4 6s2");
		strcpy(elem[75].name, "Rhenium- Re");
		strcpy(elem[75].ec, "[Xe] 4f14 5d5 6s2");
		strcpy(elem[76].name, "Osmium- Os");
		strcpy(elem[76].ec, "[Xe] 4f14 5d6 6s2");
		strcpy(elem[77].name, "Iridium- Ir");
		strcpy(elem[77].ec, "[Xe] 4f14 5d7 6s2");
		strcpy(elem[78].name, "Platinum- Pt");
		strcpy(elem[78].ec, "[Xe] 4f14 5d9 6s1");
		strcpy(elem[79].name, "Gold- Au");
		strcpy(elem[79].ec, "[Xe] 4f14 5d10 6s1");
		strcpy(elem[80].name, "Mercury- Hg");
		strcpy(elem[80].ec, "[Xe] 4f14 5d10 6s2	");
		strcpy(elem[81].name, "Thallium- Tl");
		strcpy(elem[81].ec, "[Xe] 4f14 5d10 6s2 6p1");
		strcpy(elem[82].name, "Lead- Pb");
		strcpy(elem[82].ec, "[Xe] 4f14 5d10 6s2 6p2");
		strcpy(elem[83].name, "Bismuth- Bi");
		strcpy(elem[83].ec, "[Xe] 4f14 5d10 6s2 6p3");
		strcpy(elem[84].name, "Polonium- Po");
		strcpy(elem[84].ec, "[Xe] 4f14 5d10 6s2 6p4");
		strcpy(elem[85].name, "Astatine- At");
		strcpy(elem[85].ec, "[Xe] 4f14 5d10 6s2 6p5");
		strcpy(elem[86].name, "Radon- Rn");
		strcpy(elem[86].ec, "[Xe] 4f14 5d10 6s2 6p6");
		strcpy(elem[87].name, "Francium- Fr");
		strcpy(elem[87].ec, "[Rn] 7s1");
		strcpy(elem[88].name, "Radium- Ra");
		strcpy(elem[88].ec, "[Rn] 7s2");
		strcpy(elem[89].name, "Actinium- Ac");
		strcpy(elem[89].ec, "[Rn] 6d1 7s2");
		strcpy(elem[90].name, "Thorium- Th");
		strcpy(elem[90].ec, "[Rn] 6d2 7s2");
		strcpy(elem[91].name, "Protactinium- Pa");
		strcpy(elem[91].ec, "[Rn] 5f2 6d1 7s2");
		strcpy(elem[92].name, "Uranium- U");
		strcpy(elem[92].ec, "[Rn] 5f3 6d1 7s2");
		strcpy(elem[93].name, "Neptunium- Np");
		strcpy(elem[93].ec, "[Rn] 5f4 6d1 7s2");
		strcpy(elem[94].name, "Plutonium- Pu");
		strcpy(elem[94].ec, "[Rn] 5f6 7s2");
		strcpy(elem[95].name, "Americium- Am");
		strcpy(elem[95].ec, "[Rn] 5f7 7s2");
		strcpy(elem[96].name, "Curium- Cm");
		strcpy(elem[96].ec, "[Rn] 5f7 6d1 7s2");
		strcpy(elem[97].name, "Berkelium- Bk");
		strcpy(elem[97].ec, "[Rn] 5f9 7s2");
		strcpy(elem[98].name, "Californium- Cf");
		strcpy(elem[98].ec, "[Rn] 5f10 7s2");
		strcpy(elem[99].name, "Einsteinium- Es");
		strcpy(elem[99].ec, "[Rn] 5f11 7s2");
		strcpy(elem[100].name, "Fermium- Fm");
		strcpy(elem[100].ec, "[Rn] 5f12 7s2");
		strcpy(elem[101].name, "Mendelevium- Md");
		strcpy(elem[101].ec, "[Rn] 5f13 7s2");
		strcpy(elem[102].name, "Nobelium- No");
		strcpy(elem[102].ec, "[Rn] 5f14 7s2");
		strcpy(elem[103].name, "Lawrencium- Lr");
		strcpy(elem[103].ec, "[Rn] 5f14 7s2 7p1");
		strcpy(elem[104].name, "Rutherfordium- Rf");
		strcpy(elem[104].ec, "[Rn] 5f14 6d2 7s2");
		strcpy(elem[105].name, "Dubnium- Db");
		strcpy(elem[105].ec, "[Rn] 5f14 6d3 7s2	");
		strcpy(elem[106].name, "Seaborgium- Sg");
		strcpy(elem[106].ec, "[Rn] 5f14 6d4 7s2");
		strcpy(elem[107].name, "Bohrium- Bh");
		strcpy(elem[107].ec, "[Rn] 5f14 6d5 7s2");
		strcpy(elem[108].name, "Hassium- Hs");
		strcpy(elem[108].ec, "[Rn] 5f14 6d6 7s2");
		strcpy(elem[109].name, "Meitnerium- Mt");
		strcpy(elem[109].ec, "[Rn] 5f14 6d7 7s2");
		strcpy(elem[110].name, "Darmstadtium- Ds");
		strcpy(elem[110].ec, "[Rn] 5f14 6d8 7s2");
		strcpy(elem[111].name, "Roentgenium- Rg");
		strcpy(elem[111].ec, "[Rn] 5f14 6d9 7s2");
		strcpy(elem[112].name, "Copernicium- Cn");
		strcpy(elem[112].ec, "[Rn] 5f14 6d10 7s2");
		strcpy(elem[113].name, "Ununtrium- Uut");
		strcpy(elem[113].ec, "[Rn] 5f14 6d10 7s2 7p1");
		strcpy(elem[114].name, "Flerovium- Fl");
		strcpy(elem[114].ec, "[Rn] 5f14 6d10 7s2 7p2");
	}
	// Initializing atomic weight, atomic radius and electronegativity.
	{
		elem[1].atomicw = 1.008;
		elem[1].atomicr = 53;
		elem[1].en = 2.20;
		elem[2].atomicw = 4.002602;
		elem[2].atomicr = 31;
		elem[2].en = 0;
		elem[3].atomicw = 6.94;
		elem[3].atomicr = 167;
		elem[3].en = 0.98;
		elem[4].atomicw = 9.012182;
		elem[4].atomicr = 112;
		elem[4].en = 1.57;
		elem[5].atomicw = 10.81;
		elem[5].atomicr = 87;
		elem[5].en = 2.04;
		elem[6].atomicw = 12.011;
		elem[6].atomicr = 67;
		elem[6].en = 2.55;
		elem[7].atomicw = 14.007;
		elem[7].atomicr = 56;
		elem[7].en = 3.04;
		elem[8].atomicw = 15.999;
		elem[8].atomicr = 48;
		elem[8].en = 3.44;
		elem[9].atomicw = 18.9984032;
		elem[9].atomicr = 42;
		elem[9].en = 3.98;
		elem[10].atomicw = 20.1797;
		elem[10].atomicr = 38;
		elem[10].en = 0;
		elem[11].atomicw = 22.98976928;
		elem[11].atomicr = 190;
		elem[11].en = 0.93;
		elem[12].atomicw = 24.305;
		elem[12].atomicr = 145;
		elem[12].en = 1.31;
		elem[13].atomicw = 26.9815386;
		elem[13].atomicr = 118;
		elem[13].en = 1.61;
		elem[14].atomicw = 28.085;
		elem[14].atomicr = 111;
		elem[14].en = 1.90;
		elem[15].atomicw = 30.973762;
		elem[15].atomicr = 98;
		elem[15].en = 2.19;
		elem[16].atomicw = 32.06;
		elem[16].atomicr = 88;
		elem[16].en = 2.58;
		elem[17].atomicw = 35.45;
		elem[17].atomicr = 79;
		elem[17].en = 3.16;
		elem[18].atomicw = 39.948;
		elem[18].atomicr = 71;
		elem[18].en = 0;
		elem[19].atomicw = 39.0983;
		elem[19].atomicr = 243;
		elem[19].en = 0.82;
		elem[20].atomicw = 40.078;
		elem[20].atomicr = 194;
		elem[20].en = 1.00;
		elem[21].atomicw = 44.955912;
		elem[21].atomicr = 184;
		elem[21].en = 1.36;
		elem[22].atomicw = 47.867;
		elem[22].atomicr = 176;
		elem[22].en = 1.54;
		elem[23].atomicw = 50.9415;
		elem[23].atomicr = 171;
		elem[23].en = 1.63;
		elem[24].atomicw = 51.9961;
		elem[24].atomicr = 166;
		elem[24].en = 1.66;
		elem[25].atomicw = 54.938045;
		elem[25].atomicr = 161;
		elem[25].en = 1.55;
		elem[26].atomicw = 55.845;
		elem[26].atomicr = 156;
		elem[26].en = 1.83;
		elem[27].atomicw = 58.933195;
		elem[27].atomicr = 152;
		elem[27].en = 1.88;
		elem[28].atomicw = 58.6934;
		elem[28].atomicr = 149;
		elem[28].en = 1.91;
		elem[29].atomicw = 63.546;
		elem[29].atomicr = 145;
		elem[29].en = 1.90;
		elem[30].atomicw = 65.38;
		elem[30].atomicr = 142;
		elem[30].en = 1.65;
		elem[31].atomicw = 69.723;
		elem[31].atomicr = 136;
		elem[31].en = 1.81;
		elem[32].atomicw = 72.630;
		elem[32].atomicr = 125;
		elem[32].en = 2.01;
		elem[33].atomicw = 74.92160;
		elem[33].atomicr = 114;
		elem[33].en = 2.18;
		elem[34].atomicw = 78.96;
		elem[34].atomicr = 103;
		elem[34].en = 2.55;
		elem[35].atomicw = 79.904;
		elem[35].atomicr = 94;
		elem[35].en = 2.96;
		elem[36].atomicw = 83.798;
		elem[36].atomicr = 88;
		elem[36].en = 3.00;
		elem[37].atomicw = 85.4678;
		elem[37].atomicr = 265;
		elem[37].en = 0.82;
		elem[38].atomicw = 87.62;
		elem[38].atomicr = 219;
		elem[38].en = 0.95;
		elem[39].atomicw = 88.90585;
		elem[39].atomicr = 212;
		elem[39].en = 1.22;
		elem[40].atomicw = 91.224;
		elem[40].atomicr = 206;
		elem[40].en = 1.33;
		elem[41].atomicw = 92.90638;
		elem[41].atomicr = 198;
		elem[41].en = 1.6;
		elem[42].atomicw = 95.96;
		elem[42].atomicr = 190;
		elem[42].en = 2.16;
		elem[43].atomicw = 98;
		elem[43].atomicr = 183;
		elem[43].en = 1.9;
		elem[44].atomicw = 101.07;
		elem[44].atomicr = 178;
		elem[44].en = 2.2;
		elem[45].atomicw = 102.90550;
		elem[45].atomicr = 173;
		elem[45].en = 2.28;
		elem[46].atomicw = 106.42;
		elem[46].atomicr = 169;
		elem[46].en = 2.20;
		elem[47].atomicw = 107.8682;
		elem[47].atomicr = 165;
		elem[47].en = 1.93;
		elem[48].atomicw = 112.411;
		elem[48].atomicr = 161;
		elem[48].en = 1.69;
		elem[49].atomicw = 114.818;
		elem[49].atomicr = 156;
		elem[49].en = 1.78;
		elem[50].atomicw = 118.710;
		elem[50].atomicr = 145;
		elem[50].en = 1.96;
		elem[51].atomicw = 121.760;
		elem[51].atomicr = 133;
		elem[51].en = 2.05;
		elem[52].atomicw = 127.60;
		elem[52].atomicr = 123;
		elem[52].en = 2.1;
		elem[53].atomicw = 126.90447;
		elem[53].atomicr = 115;
		elem[53].en = 2.66;
		elem[54].atomicw = 131.293;
		elem[54].atomicr = 108;
		elem[54].en = 2.6;
		elem[55].atomicw = 132.9054519;
		elem[55].atomicr = 298;
		elem[55].en = 0.79;
		elem[56].atomicw = 137.327;
		elem[56].atomicr = 253;
		elem[56].en = 0.89;
		elem[57].atomicw = 138.90547;
		elem[57].atomicr = 169;
		elem[57].en = 1.10;
		elem[58].atomicw = 140.90765;
		elem[58].atomicr = 131;
		elem[58].en = 1.12;
		elem[59].atomicw = 140.90765;
		elem[59].atomicr = 247;
		elem[59].en = 1.13;
		elem[60].atomicw = 144.242;
		elem[60].atomicr = 206;
		elem[60].en = 1.14;
		elem[61].atomicw = 145;
		elem[61].atomicr = 205;
		elem[61].en = 0;
		elem[62].atomicw = 150.36;
		elem[62].atomicr = 238;
		elem[62].en = 1.17;
		elem[63].atomicw = 151.964;
		elem[63].atomicr = 231;
		elem[63].en = 0;
		elem[64].atomicw = 157.25;
		elem[64].atomicr = 233;
		elem[64].en = 1.20;
		elem[65].atomicw = 158.92535;
		elem[65].atomicr = 225;
		elem[65].en = 0;
		elem[66].atomicw = 162.500;
		elem[66].atomicr = 228;
		elem[66].en = 1.22;
		elem[67].atomicw = 164.93032;
		elem[67].atomicr = 0;
		elem[67].en = 1.23;
		elem[68].atomicw = 167.259;
		elem[68].atomicr = 226;
		elem[68].en = 1.24;
		elem[69].atomicw = 168.93421;
		elem[69].atomicr = 222;
		elem[69].en = 1.25;
		elem[70].atomicw = 173.054;
		elem[70].atomicr = 222;
		elem[70].en = 0;
		elem[71].atomicw = 174.9668;
		elem[71].atomicr = 217;
		elem[71].en = 1.27;
		elem[72].atomicw = 178.49;
		elem[72].atomicr = 208;
		elem[72].en = 1.3;
		elem[73].atomicw = 180.94788;
		elem[73].atomicr = 200;
		elem[73].en = 1.5;
		elem[74].atomicw = 183.84;
		elem[74].atomicr = 193;
		elem[74].en = 2.36;
		elem[75].atomicw = 186.207;
		elem[75].atomicr = 188;
		elem[75].en = 1.9;
		elem[76].atomicw = 190.23;
		elem[76].atomicr = 185;
		elem[76].en = 2.2;
		elem[77].atomicw = 192.217;
		elem[77].atomicr = 180;
		elem[77].en = 2.20;
		elem[78].atomicw = 195.084;
		elem[78].atomicr = 177;
		elem[78].en = 2.28;
		elem[79].atomicw = 196.966569;
		elem[79].atomicr = 174;
		elem[79].en = 2.54;
		elem[80].atomicw = 200.592;
		elem[80].atomicr = 171;
		elem[80].en = 2.00;
		elem[81].atomicw = 204.38;
		elem[81].atomicr = 156;
		elem[81].en = 1.62;
		elem[82].atomicw = 207.2;
		elem[82].atomicr = 154;
		elem[82].en = 2.33;
		elem[83].atomicw = 208.98040;
		elem[83].atomicr = 143;
		elem[83].en = 2.02;
		elem[84].atomicw = 209;
		elem[84].atomicr = 135;
		elem[84].en = 2.0;
		elem[85].atomicw = 210;
		elem[85].atomicr = 0;
		elem[85].en = 2.2;
		elem[86].atomicw = 222;
		elem[86].atomicr = 120;
		elem[86].en = 0;
		elem[87].atomicw = 223;
		elem[87].atomicr = 0;
		elem[87].en = 0.7;
		elem[88].atomicw = 226;
		elem[88].atomicr = 0;
		elem[88].en = 0.9;
		elem[89].atomicw = 227;
		elem[89].atomicr = 0;
		elem[89].en = 1.1;
		elem[90].atomicw = 232.03806;
		elem[90].atomicr = 0;
		elem[90].en = 1.3;
		elem[91].atomicw = 231.03588;
		elem[91].atomicr = 0;
		elem[91].en = 1.5;
		elem[92].atomicw = 238.02891;
		elem[92].atomicr = 0;
		elem[92].en = 1.38;
		elem[93].atomicw = 237;
		elem[93].atomicr = 0;
		elem[93].en = 1.36;
		elem[94].atomicw = 244;
		elem[94].atomicr = 0;
		elem[94].en = 1.28;
		elem[95].atomicw = 243;
		elem[95].atomicr = 0;
		elem[95].en = 1.3;
		elem[96].atomicw = 247;
		elem[96].atomicr = 0;
		elem[96].en = 1.3;
		elem[97].atomicw = 247;
		elem[97].atomicr = 0;
		elem[97].en = 1.3;
		elem[98].atomicw = 251;
		elem[98].atomicr = 0;
		elem[98].en = 1.3;
		elem[99].atomicw = 252;
		elem[99].atomicr = 0;
		elem[99].en = 1.3;
		elem[100].atomicw = 257;
		elem[100].atomicr = 0;
		elem[100].en = 1.3;
		elem[101].atomicw = 258;
		elem[101].atomicr = 0;
		elem[101].en = 1.3;
		elem[102].atomicw = 259;
		elem[102].atomicr = 0;
		elem[102].en = 1.3;
		elem[103].atomicw = 262;
		elem[103].atomicr = 0;
		elem[103].en = 1.3;
		elem[104].atomicw = 267;
		elem[104].atomicr = 0;
		elem[104].en = 1.3;
		elem[105].atomicw = 268;
		elem[105].atomicr = 0;
		elem[105].en = 1.3;
		elem[106].atomicw = 269;
		elem[106].atomicr = 0;
		elem[106].en = 0;
		elem[107].atomicw = 270;
		elem[107].atomicr = 0;
		elem[107].en = 0;
		elem[108].atomicw = 269;
		elem[108].atomicr = 0;
		elem[108].en = 0;
		elem[109].atomicw = 278;
		elem[109].atomicr = 0;
		elem[109].en = 0;
		elem[110].atomicw = 281;
		elem[110].atomicr = 0;
		elem[110].en = 0;
		elem[111].atomicw = 281;
		elem[111].atomicr = 0;
		elem[111].en = 0;
		elem[112].atomicw = 285;
		elem[112].atomicr = 0;
		elem[112].en = 0;
		elem[113].atomicw = 286;
		elem[113].atomicr = 0;
		elem[113].en = 0;
		elem[114].atomicw = 289;
		elem[114].atomicr = 0;
		elem[114].en = 0;
	}
	// Initializing melting point , boiling point and density.
	{
		elem[1].meltp = 14.01;
		elem[1].boilp = 20.28;
		elem[1].density = 0.00008988;
		elem[2].meltp = 0.95;
		elem[2].boilp = 4.22;
		elem[2].density = 0.0001785;
		elem[3].meltp = 453.69;
		elem[3].boilp = 1560;
		elem[3].density = 0.534;
		elem[4].meltp = 1560;
		elem[4].boilp = 2742;
		elem[4].density = 1.85;
		elem[5].meltp = 2349;
		elem[5].boilp = 4200;
		elem[5].density = 2.34;
		elem[6].meltp = 3800;
		elem[6].boilp = 4300;
		elem[6].density = 2.267;
		elem[7].meltp = 63.15;
		elem[7].boilp = 77.36;
		elem[7].density = 0.0012506;
		elem[8].meltp = 54.36;
		elem[8].boilp = 90.20;
		elem[8].density = 0.001429;
		elem[9].meltp = 53.53;
		elem[9].boilp = 85.03;
		elem[9].density = 0.001696;
		elem[10].meltp = 24.56;
		elem[10].boilp = 27.07;
		elem[10].density = 0.0008999;
		elem[11].meltp = 370.87;
		elem[11].boilp = 1156;
		elem[11].density = 0.971;
		elem[12].meltp = 923;
		elem[12].boilp = 1363;
		elem[12].density = 1.738;
		elem[13].meltp = 933.47;
		elem[13].boilp = 2792;
		elem[13].density = 2.698;
		elem[14].meltp = 1687;
		elem[14].boilp = 3538;
		elem[14].density = 2.3296;
		elem[15].meltp = 317.30;
		elem[15].boilp = 550;
		elem[15].density = 1.82;
		elem[16].meltp = 388.36;
		elem[16].boilp = 717.87;
		elem[16].density = 2.067;
		elem[17].meltp = 171.6;
		elem[17].boilp = 239.11;
		elem[17].density = 0.003214;
		elem[18].meltp = 83.80;
		elem[18].boilp = 87.30;
		elem[18].density = 0.0017837;
		elem[19].meltp = 336.53;
		elem[19].boilp = 1032;
		elem[19].density = 0.862;
		elem[20].meltp = 1115;
		elem[20].boilp = 1757;
		elem[20].density = 1.54;
		elem[21].meltp = 1814;
		elem[21].boilp = 3109;
		elem[21].density = 2.989;
		elem[22].meltp = 1941;
		elem[22].boilp = 3560;
		elem[22].density = 4.54;
		elem[23].meltp = 2183;
		elem[23].boilp = 3680;
		elem[23].density = 6.11;
		elem[24].meltp = 2180;
		elem[24].boilp = 2944;
		elem[24].density = 7.15;
		elem[25].meltp = 1519;
		elem[25].boilp = 2334;
		elem[25].density = 7.44;
		elem[26].meltp = 1811;
		elem[26].boilp = 3134;
		elem[26].density = 7.874;
		elem[27].meltp = 1768;
		elem[27].boilp = 3200;
		elem[27].density = 8.86;
		elem[28].meltp = 1728;
		elem[28].boilp = 3186;
		elem[28].density = 8.912;
		elem[29].meltp = 1357.77;
		elem[29].boilp = 2835;
		elem[29].density = 8.96;
		elem[30].meltp = 692.88;
		elem[30].boilp = 1180;
		elem[30].density = 7.134;
		elem[31].meltp = 302.9146;
		elem[31].boilp = 2477;
		elem[31].density = 5.907;
		elem[32].meltp = 1211.40;
		elem[32].boilp = 3106;
		elem[32].density = 5.323;
		elem[33].meltp = 1090;
		elem[33].boilp = 887;
		elem[33].density = 5.776;
		elem[34].meltp = 453;
		elem[34].boilp = 958;
		elem[34].density = 4.809;
		elem[35].meltp = 265.8;
		elem[35].boilp = 332.0;
		elem[35].density = 3.122;
		elem[36].meltp = 115.79;
		elem[36].boilp = 119.93;
		elem[36].density = 0.003733;
		elem[37].meltp = 312.46;
		elem[37].boilp = 961;
		elem[37].density = 1.532;
		elem[38].meltp = 1050;
		elem[38].boilp = 1655;
		elem[38].density = 2.64;
		elem[39].meltp = 1799;
		elem[39].boilp = 3609;
		elem[39].density = 4.469;
		elem[40].meltp = 2128;
		elem[40].boilp = 4682;
		elem[40].density = 6.506;
		elem[41].meltp = 2750;
		elem[41].boilp = 5017;
		elem[41].density = 8.57;
		elem[42].meltp = 2896;
		elem[42].boilp = 4912;
		elem[42].density = 10.22;
		elem[43].meltp = 2430;
		elem[43].boilp = 4538;
		elem[43].density = 11.5;
		elem[44].meltp = 2607;
		elem[44].boilp = 4423;
		elem[44].density = 12.37;
		elem[45].meltp = 2237;
		elem[45].boilp = 3968;
		elem[45].density = 12.41;
		elem[46].meltp = 1828.05;
		elem[46].boilp = 3236;
		elem[46].density = 12.02;
		elem[47].meltp = 1234.93;
		elem[47].boilp = 2435;
		elem[47].density = 10.501;
		elem[48].meltp = 594.22;
		elem[48].boilp = 1040;
		elem[48].density = 8.69;
		elem[49].meltp = 429.75;
		elem[49].boilp = 2345;
		elem[49].density = 7.31;
		elem[50].meltp = 505.08;
		elem[50].boilp = 2875;
		elem[50].density = 7.287;
		elem[51].meltp = 903.78;
		elem[51].boilp = 1860;
		elem[51].density = 6.685;
		elem[52].meltp = 722.66;
		elem[52].boilp = 1261;
		elem[52].density = 6.232;
		elem[53].meltp = 386.85;
		elem[53].boilp = 457.4;
		elem[53].density = 4.93;
		elem[54].meltp = 161.4;
		elem[54].boilp = 165.03;
		elem[54].density = 0.005887;
		elem[55].meltp = 301.59;
		elem[55].boilp = 944;
		elem[55].density = 1.873;
		elem[56].meltp = 1000;
		elem[56].boilp = 2170;
		elem[56].density = 3.594;
		elem[57].meltp = 1193;
		elem[57].boilp = 3737;
		elem[57].density = 6.145;
		elem[58].meltp = 1068;
		elem[58].boilp = 3716;
		elem[58].density = 6.77;
		elem[59].meltp = 1208;
		elem[59].boilp = 3793;
		elem[59].density = 6.773;
		elem[60].meltp = 1297;
		elem[60].boilp = 3347;
		elem[60].density = 7.007;
		elem[61].meltp = 1315;
		elem[61].boilp = 3273;
		elem[61].density = 7.26;
		elem[62].meltp = 1345;
		elem[62].boilp = 2067;
		elem[62].density = 7.52;
		elem[63].meltp = 1099;
		elem[63].boilp = 1802;
		elem[63].density = 5.243;
		elem[64].meltp = 1585;
		elem[64].boilp = 3546;
		elem[64].density = 7.895;
		elem[65].meltp = 1629;
		elem[65].boilp = 3503;
		elem[65].density = 8.229;
		elem[66].meltp = 1680;
		elem[66].boilp = 2840;
		elem[66].density = 8.55;
		elem[67].meltp = 1734;
		elem[67].boilp = 2993;
		elem[67].density = 8.795;
		elem[68].meltp = 1802;
		elem[68].boilp = 3141;
		elem[68].density = 9.066;
		elem[69].meltp = 1818;
		elem[69].boilp = 2223;
		elem[69].density = 9.321;
		elem[70].meltp = 1097;
		elem[70].boilp = 1469;
		elem[70].density = 6.965;
		elem[71].meltp = 1925;
		elem[71].boilp = 3675;
		elem[71].density = 9.84;
		elem[72].meltp = 2506;
		elem[72].boilp = 4876;
		elem[72].density = 13.31;
		elem[73].meltp = 3290;
		elem[73].boilp = 5731;
		elem[73].density = 16.654;
		elem[74].meltp = 3695;
		elem[74].boilp = 5828;
		elem[74].density = 19.25;
		elem[75].meltp = 3459;
		elem[75].boilp = 5869;
		elem[75].density = 21.02;
		elem[76].meltp = 3306;
		elem[76].boilp = 5285;
		elem[76].density = 22.61;
		elem[77].meltp = 2719;
		elem[77].boilp = 4701;
		elem[77].density = 22.56;
		elem[78].meltp = 2041.4;
		elem[78].boilp = 4098;
		elem[78].density = 21.46;
		elem[79].meltp = 1337.33;
		elem[79].boilp = 3129;
		elem[79].density = 19.282;
		elem[80].meltp = 234.43;
		elem[80].boilp = 629.88;
		elem[80].density = 13.5336;
		elem[81].meltp = 577;
		elem[81].boilp = 1746;
		elem[81].density = 11.85;
		elem[82].meltp = 600.61;
		elem[82].boilp = 2022;
		elem[82].density = 11.342;
		elem[83].meltp = 544.7;
		elem[83].boilp = 1837;
		elem[83].density = 9.807;
		elem[84].meltp = 527;
		elem[84].boilp = 1235;
		elem[84].density = 9.32;
		elem[85].meltp = 575;
		elem[85].boilp = 610;
		elem[85].density = 7;
		elem[86].meltp = 202;
		elem[86].boilp = 211.3;
		elem[86].density = 0.00973;
		elem[87].meltp = 300;
		elem[87].boilp = 950;
		elem[87].density = 1.87;
		elem[88].meltp = 973;
		elem[88].boilp = 2010;
		elem[88].density = 5.5;
		elem[89].meltp = 1323;
		elem[89].boilp = 3471;
		elem[89].density = 10.07;
		elem[90].meltp = 2115;
		elem[90].boilp = 5061;
		elem[90].density = 11.72;
		elem[91].meltp = 1841;
		elem[91].boilp = 4300;
		elem[91].density = 15.37;
		elem[92].meltp = 1405.3;
		elem[92].boilp = 4404;
		elem[92].density = 18.95;
		elem[93].meltp = 917;
		elem[93].boilp = 4273;
		elem[93].density = 20.45;
		elem[94].meltp = 912.5;
		elem[94].boilp = 3501;
		elem[94].density = 19.84;
		elem[95].meltp = 1449;
		elem[95].boilp = 2880;
		elem[95].density = 13.69;
		elem[96].meltp = 1613;
		elem[96].boilp = 3383;
		elem[96].density = 13.51;
		elem[97].meltp = 1259;
		elem[97].boilp = 2900;
		elem[97].density = 14.79;
		elem[98].meltp = 1173;
		elem[98].boilp = 1743;
		elem[98].density = 15.1;
		elem[99].meltp = 1133;
		elem[99].boilp = 1269;
		elem[99].density = 8.84;
		elem[100].meltp = 1125;
		elem[100].boilp = 0;
		elem[100].density = 0;
		elem[101].meltp = 1100;
		elem[101].boilp = 0;
		elem[101].density = 0;
		elem[102].meltp = 1100;
		elem[102].boilp = 0;
		elem[102].density = 0;
		elem[103].meltp = 1900;
		elem[103].boilp = 0;
		elem[103].density = 0;
		elem[104].meltp = 2400;
		elem[104].boilp = 5800;
		elem[104].density = 23.2;
		elem[105].meltp = 0;
		elem[105].boilp = 0;
		elem[105].density = 29.3;
		elem[106].meltp = 0;
		elem[106].boilp = 0;
		elem[106].density = 35.0;
		elem[107].meltp = 0;
		elem[107].boilp = 0;
		elem[107].density = 37.1;
		elem[108].meltp = 0;
		elem[108].boilp = 0;
		elem[108].density = 40.7;
		elem[109].meltp = 0;
		elem[109].boilp = 0;
		elem[109].density = 37.4;
		elem[110].meltp = 0;
		elem[110].boilp = 0;
		elem[110].density = 34.8;
		elem[111].meltp = 0;
		elem[111].boilp = 0;
		elem[111].density = 28.7;
		elem[112].meltp = 0;
		elem[112].boilp = 357;
		elem[112].density = 23.7;
		elem[113].meltp = 700;
		elem[113].boilp = 1400;
		elem[113].density = 16;
		elem[114].meltp = 340;
		elem[114].boilp = 420;
		elem[114].density = 14;
	}

	// Initializing origin of name.
	{
		strcpy(elem[1].origin, "the Greek 'hydro' and 'genes' meaning water-forming");
		strcpy(elem[2].origin, "the Greek 'helios' meaning sun");
		strcpy(elem[3].origin, "the Greek 'lithos' meaning stone");
		strcpy(elem[4].origin, "the Greek name for beryl, 'beryllo'");
		strcpy(elem[5].origin, "the Arabic 'buraq', which was the name for borax");
		strcpy(elem[6].origin, "the Latin 'carbo', meaning charcoal");
		strcpy(elem[7].origin, "the Greek 'nitron' and 'genes' meaning nitre-forming");
		strcpy(elem[8].origin, "the Greek 'oxy' and 'genes' meaning acid-forming");
		strcpy(elem[9].origin, "the Latin 'fluere', meaning to flow");
		strcpy(elem[10].origin, "the Greek 'neos', meaning new");
		strcpy(elem[11].origin, "the English word soda");
		strcpy(elem[12].origin, "Magnesia, a district of Eastern Thessaly in Greece");
		strcpy(elem[13].origin, "Magnesia, a district of Eastern Thessaly in Greece");
		strcpy(elem[14].origin, "the Latin 'silex' or 'silicis', meaning flint");
		strcpy(elem[15].origin, "the Greek 'phosphoros', meaning bringer of light");
		strcpy(elem[16].origin, "Either from the Sanskrit 'sulvere', or the Latin 'sulfurium', both names for sulfur");
		strcpy(elem[17].origin, "the Greek 'chloros', meaning greenish yellow");
		strcpy(elem[18].origin, "the Greek, 'argos', meaning idle");
		strcpy(elem[19].origin, "the English word potash");
		strcpy(elem[20].origin, "the Latin 'calx' meaning lime");
		strcpy(elem[21].origin, "Scandinavia");
		strcpy(elem[22].origin, "Titans, the sons of the Earth goddess of Greek mythology");
		strcpy(elem[23].origin, "Vanadis, an old Norse name for the Scandinavian goddess Freyja");
		strcpy(elem[24].origin, "the Greek 'chroma', meaning colour");
		strcpy(elem[25].origin, "from the black magnesium oxide, 'magnesia nigra'");
		strcpy(elem[26].origin, "the Anglo-Saxon name iren");
		strcpy(elem[27].origin, "the German word 'kobald', meaning goblin");
		strcpy(elem[28].origin, "the shortened of the German 'kupfernickel' meaning St. Nicholas's copper");
		strcpy(elem[29].origin, "derived from the Latin 'Cyprium aes', meaning a metal from Cyprus");
		strcpy(elem[30].origin, "the German, 'zinc', meaning stone");
		strcpy(elem[31].origin, "France");
		strcpy(elem[32].origin, "Germany");
		strcpy(elem[33].origin, "the Greek name 'arsenikon' for the yellow pigment orpiment");
		strcpy(elem[34].origin, "Moon");
		strcpy(elem[35].origin, "the Greek 'bromos' meaning stench");
		strcpy(elem[36].origin, "the Greek 'kryptos', meaning hidden");
		strcpy(elem[37].origin, "the Latin 'rubidius', meaning deepest red");
		strcpy(elem[38].origin, "Strontian, a small town in Scotland");
		strcpy(elem[39].origin, "Ytterby, Sweden");
		strcpy(elem[40].origin, "the Persian 'zargun', meaning gold coloured");
		strcpy(elem[41].origin, "Niobe, daughter of king Tantalus from Greek mythology");
		strcpy(elem[42].origin, "the Greek 'molybdos' meaning lead");
		strcpy(elem[43].origin, "the Greek 'tekhnetos' meaning artificial");
		strcpy(elem[44].origin, "Russia");
		strcpy(elem[45].origin, "the Greek 'rhodon', meaning rose coloured");
		strcpy(elem[46].origin, "the then recently-discovered asteroid Pallas, considered a planet at the time");
		strcpy(elem[47].origin, "the Anglo-Saxon name siolfur");
		strcpy(elem[48].origin, "the Latin name for the mineral calmine, 'cadmia'");
		strcpy(elem[49].origin, "the Latin 'indicium', meaning violet or indigo");
		strcpy(elem[50].origin, "the Anglo-Saxon word tin");
		strcpy(elem[51].origin, "the Greek 'anti – monos', meaning not alone");
		strcpy(elem[52].origin, "Earth, the third planet on solar system");
		strcpy(elem[53].origin, "the Greek 'iodes' meaning violet");
		strcpy(elem[54].origin, "the Greek 'xenos' meaning stranger");
		strcpy(elem[55].origin, "the Latin 'caesius', meaning sky blue");
		strcpy(elem[56].origin, "the Greek 'barys', meaning heavy");
		strcpy(elem[57].origin, "the Greek 'lanthanein', meaning to lie hidden");
		strcpy(elem[58].origin, "Ceres, the Roman God of agriculture");
		strcpy(elem[59].origin, "the Greek 'prasios didymos' meaning green twin");
		strcpy(elem[60].origin, "the Greek 'neos didymos' meaning new twin");
		strcpy(elem[61].origin, "Prometheus of Greek mythology who stole fire from the Gods and gave it to humans");
		strcpy(elem[62].origin, "Samarskite, the name of the mineral from which it was first isolated");
		strcpy(elem[63].origin, "Europe");
		strcpy(elem[64].origin, "Johan Gadolin, chemist, physicist and mineralogist");
		strcpy(elem[65].origin, "Ytterby, Sweden");
		strcpy(elem[66].origin, "the Greek 'dysprositos', meaning hard to get");
		strcpy(elem[67].origin, "Stockholm, Sweden");
		strcpy(elem[68].origin, "Ytterby, Sweden");
		strcpy(elem[69].origin, "Thule, the ancient name for Scandinavia");
		strcpy(elem[70].origin, "Ytterby, Sweden");
		strcpy(elem[71].origin, "Paris, France");
		strcpy(elem[72].origin, "Copenhagen, Denmark");
		strcpy(elem[73].origin, "King Tantalus, father of Niobe from Greek mythology");
		strcpy(elem[74].origin, "the Swedish 'tung sten' meaning heavy stone");
		strcpy(elem[75].origin, "Rhine, a river");
		strcpy(elem[76].origin, "the Greek 'osme', meaning smell");
		strcpy(elem[77].origin, "Iris, the Greek goddess of the rainbow");
		strcpy(elem[78].origin, "the Spanish 'platina', meaning little silver");
		strcpy(elem[79].origin, "the Anglo-Saxon word gold");
		strcpy(elem[80].origin, "Mercury, the first planet in the Solar System");
		strcpy(elem[81].origin, "the Greek 'thallos', meaning a green twig");
		strcpy(elem[82].origin, "the Anglo-Saxon lead");
		strcpy(elem[83].origin, "the German 'Bisemutum' a corruption of 'Weisse Masse' meaning white mass");
		strcpy(elem[84].origin, "Poland, the native country of Marie Curie, who first isolated the element");
		strcpy(elem[85].origin, "the Greek 'astatos', meaning unstable");
		strcpy(elem[86].origin, "From radium, as it was first detected as an emission from radium during radioactive decay");
		strcpy(elem[87].origin, "France, where it was first discovered");
		strcpy(elem[88].origin, "the Latin 'radius', meaning ray");
		strcpy(elem[89].origin, "the Greek 'actinos', meaning a ray");
		strcpy(elem[90].origin, "Thor, the Scandinavian god of thunder");
		strcpy(elem[91].origin, "the Greek 'protos', as a prefix to the element actinium");
		strcpy(elem[92].origin, "Uranus, the seventh planet in the Solar System");
		strcpy(elem[93].origin, "Neptune, the eighth planet in the Solar System");
		strcpy(elem[94].origin, "Pluto, a dwarf planet in the Solar System");
		strcpy(elem[95].origin, "Americas, the continent where the element was first synthesized");
		strcpy(elem[96].origin, "Pierre Curie, a physicist, and Marie Curie, a physicist and chemist");
		strcpy(elem[97].origin, "Berkeley, California, USA, where the element was first synthesized");
		strcpy(elem[98].origin, "State of California, USA, where the element was first synthesized");
		strcpy(elem[99].origin, "Albert Einstein, physicist");
		strcpy(elem[100].origin, "Enrico Fermi, physicist");
		strcpy(elem[101].origin, "Dmitri Mendeleyev, chemist and inventor");
		strcpy(elem[102].origin, "Alfred Nobel, chemist, engineer, innovator, and armaments manufacturer");
		strcpy(elem[103].origin, "Ernest O. Lawrence, physicist");
		strcpy(elem[104].origin, "Ernest Rutherford, chemist and physicist");
		strcpy(elem[105].origin, "Dubna, Russia");
		strcpy(elem[106].origin, "Glenn T. Seaborg, scientist");
		strcpy(elem[107].origin, "Hesse, Germany, where the element was first synthesized");
		strcpy(elem[108].origin, "Lise Meitner, physicist");
		strcpy(elem[109].origin, "Darmstadt, Germany, where the element was first synthesized");
		strcpy(elem[110].origin, "Wilhelm Conrad Röntgen, physicist");
		strcpy(elem[111].origin, "Nicolaus Copernicus, astronomer");
		strcpy(elem[112].origin, "IUPAC systematic element name");
		strcpy(elem[113].origin, "Georgy Flyorov, physicist");
		strcpy(elem[114].origin, "IUPAC systematic element name");
	}

	// Initializing group number and block.
	{
		for (i = 1; i <= 114; ++i)
		{
			if (i == 1 || i == 3 || i == 11 || i == 19 || i == 37 || i == 55 || i == 87)
			{
				elem[i].group = 1;
				elem[i].block = 's';
			}
			else if (i == 4 || i == 12 || i == 20 || i == 38 || i == 56 || i == 88)
			{
				elem[i].group = 2;
				elem[i].block = 's';
			}
			else if (i == 21 || i == 39 || i == 57 || i == 89)
			{
				elem[i].group = 3;
				elem[i].block = 'd';
			}
			else if (i == 22 || i == 40 || i == 72 || i == 104)
			{
				elem[i].group = 4;
				elem[i].block = 'd';
			}
			else if (i == 23 || i == 41 || i == 73 || i == 105)
			{
				elem[i].group = 5;
				elem[i].block = 'd';
			}
			else if (i == 24 || i == 42 || i == 74 || i == 106)
			{
				elem[i].group = 6;
				elem[i].block = 'd';
			}
			else if (i == 25 || i == 43 || i == 75 || i == 107)
			{
				elem[i].group = 7;
				elem[i].block = 'd';
			}
			else if (i == 26 || i == 44 || i == 76 || i == 108)
			{
				elem[i].group = 8;
				elem[i].block = 'd';
			}
			else if (i == 27 || i == 45 || i == 77 || i == 109)
			{
				elem[i].group = 9;
				elem[i].block = 'd';
			}
			else if (i == 28 || i == 46 || i == 78 || i == 110)
			{
				elem[i].group = 10;
				elem[i].block = 'd';
			}
			else if (i == 29 || i == 47 || i == 79 || i == 111)
			{
				elem[i].group = 11;
				elem[i].block = 'd';
			}
			else if (i == 30 || i == 48 || i == 80 || i == 112)
			{
				elem[i].group = 12;
				elem[i].block = 'd';
			}
			else if (i == 5 || i == 13 || i == 31 || i == 49 || i == 81 || i == 113)
			{
				elem[i].group = 13;
				elem[i].block = 'p';
			}
			else if (i == 6 || i == 14 || i == 32 || i == 50 || i == 82 || i == 114)
			{
				elem[i].group = 14;
				elem[i].block = 'p';
			}
			else if (i == 7 || i == 15 || i == 33 || i == 51 || i == 83 || i == 115)
			{
				elem[i].group = 15;
				elem[i].block = 'p';
			}
			else if (i == 8 || i == 16 || i == 34 || i == 52 || i == 84 || i == 116)
			{
				elem[i].group = 16;
				elem[i].block = 'p';
			}
			else if (i == 9 || i == 17 || i == 35 || i == 53 || i == 85 || i == 117)
			{
				elem[i].group = 17;
				elem[i].block = 'p';
			}
			else if (i == 2 || i == 10 || i == 18 || i == 36 || i == 54 || i == 86 || i == 118)
			{
				elem[i].group = 18;
				elem[i].block = 'p';
			}
		}
		for (i = 57; i <= 71; ++i)
		{
			elem[i].block = 'f';
		}
		for (i = 89; i <= 103; ++i)
		{
			elem[i].block = 'f';
		}
	}
	// Initializing period number.
	{
		for (i = 1; i <= 2; ++i)
		{
			elem[i].period = 1;
		}
		for (i = 3; i <= 10; ++i)
		{
			elem[i].period = 2;
		}
		for (i = 11; i <= 18; ++i)
		{
			elem[i].period = 3;
		}
		for (i = 19; i <= 36; ++i)
		{
			elem[i].period = 4;
		}
		for (i = 37; i <= 54; ++i)
		{
			elem[i].period = 5;
		}
		for (i = 55; i <= 86; ++i)
		{
			elem[i].period = 6;
		}
		for (i = 87; i <= 114; ++i)
		{
			elem[i].period = 7;
		}
	}
	// User Interface coding.
	do
	{
	first:
		printf("\n\n\n\n\n\n\n\t\t\tWhat would you like to do?\n\n\n");
		usleep(1000 * 1000);
		printf("\t1. Search for an element\t");
		usleep(1000 * 500);
		printf("2. View the Modern Periodic Table\t");
		usleep(1000 * 500);
		printf("3. Write and store notes\n");
		usleep(1000 * 500);
		printf("\t4. Read and study notes\t\t");
		usleep(1000 * 500);
		printf("5. Edit and modify notes\t\t");
		usleep(1000 * 500);
		printf("6. Exit Program\n\n");
		usleep(1000 * 500);
		printf("\t\t\tEnter your option: ");
		scanf(" %c", &t);
		system("clear");
		if (t == '1')
		{
		start:
			printf("\n\n\n\n\n\n\n\t\tHow would you like to search for your element? \n\n\n");
			usleep(1000 * 1000);
			printf("\t1. Entering the atomic number\t");
			usleep(1000 * 1000);
			printf("2. Entering the element name\n\n\n");
			usleep(1000 * 2000);
			printf("\t\t\tEnter your option: ");
			scanf("%d", &n);
			system("clear");
			switch (n)
			{
			case 1:
				printf("\n\n\n\n\n\t\tEnter the atomic number of the element: ");
			one:
				scanf("%d", &a);
				for (i = 1; i <= 114; ++i)
				{
					if (a == i)
					{
						display_data(i);
						goto end;
					}
				}
				printf("\n\t\t\t   Please try again");
				usleep(1000 * 2000);
				system("clear");
				printf("\n\n\n\n\n\t\tEnter the atomic number of the element: ");
				goto one;
				break;
			case 2:
				printf("\t   Enter the element name given by the following format: \n\n");
				printf("\t\t   \"Element Name\"- \"Element Symbol\"\n\n");
				printf("\t\t   ");
				gets(name); // Two gets statements to prevent keyboard buffer.
			two:
				gets(name);
				for (i = 1; i <= 114; ++i)
				{
					if (strcmp(name, elem[i].name) == 0)
					{
						display_data(i);
						goto end;
					}
				}
				printf("\t\t\t   Please try again");
				usleep(1000 * 2000);
				system("clear");
				printf("\t   Enter the element name given by the following format: \n\n");
				printf("\t\t   \"Element Name\"- \"Element Symbol\"\n\n");
				printf("\t\t   ");
				goto two;
				break;
			default:
				printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\tWrong Option!");
				usleep(1000 * 2000);
				system("clear");
				goto start;
			}
		}
		else if (t == '2')
		{
			display_table();
			goto end;
		}
		else if (t == '3')
		{
			write_data();
			printf("\n\t\t\tNotes succesfully saved!\n");
			usleep(1000 * 500);
		}
		else if (t == '4')
		{
			char c;
			read_data();
		ask:
			printf("\n\t\tDid you finished reading? (Y/N)");
			scanf(" %c", &c);
			if (c == 'y' || c == 'Y')
			{
				printf("\n\t\t\tGreat Job!\n");
				usleep(1000 * 500);
			}
			else
			{
				printf("\n\t\tTake your time...");
				goto ask;
			}
		}
		else if (t == '5')
		{
			edit_data();
			printf("\n\t\t\tEdit Successful!\n");
			usleep(1000 * 500);
		}
		else if (t == '6')
		{
			exit(0);
		}
		else
		{
			printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\tWrong Option!");
			usleep(1000 * 2000);
			system("clear");
			goto first;
		}
	end:
		printf("\n\n");
		system("clear");
		printf("\n\n\n\n\n\n\n\n\n\n\n\t\tWould you like to continue?(Y/N) ");
		scanf(" %c", &c);
		if (c == 'n' || c == 'N')
		{
			exit(0);
		}
		system("clear");
	} while (c == 'y' || c == 'Y');

	getchar();
	return 0;
}
void display_table()
{
	printf("\n\t\t\tTHE MODERN PERIODIC TABLE\n");
	printf("\t\t\t-------------------------\n");
	printf("\tH                                                      He\n\n");
	printf("\tLi Be                                 B  C   N  O   F  Ne\n\n");
	printf("\tNa Mg                                 Al Si  P  S   Cl Ar\n\n");
	printf("\tK  Ca Sc Ti V  Cr Mn Fe Co Ni Cu  Zn  Ga Ge  As Se  Br Kr\n\n");
	printf("\tRb Sr Y  Zr Nb Mo Tc Ru Rh Pd Ag  Cd  In Sn  Sb Te  I  Xe\n\n");
	printf("\tCs Ba La Hf Ta W  Re Os Ir Pt Au  Hg  Tl Pb  Bi Po  At Rn\n\n");
	printf("\tFr Ra Ac Rf Db Sg Bh Hs Mt Ds Uuu Uub -  Uuq -  Uuh\n\n\n");
	printf("\t\t Ce Pr Nd Pm Sm Eu Gd Tb Dy Ho Er Tm Yb Lu\n\n");
	printf("\t\t Th Pa U  Np Pu Am Cm Bk Cf Es Fm Md No Lr\n\n\n");
}
void display_data(int i)
{
	printf("\n\a");
	printf("\t\t          Name             ");
	puts(elem[i].name);
	printf("\n");
	printf("\t\t                Origin of Name       ");
	printf("\n\t\t");
	puts(elem[i].origin);
	printf("\n");
	printf("\t\t       Atomic Number       ");
	printf("%hd", (elem[i].atomicno));
	printf("\n");
	printf("\t\t Electronic Configuration  ");
	puts(elem[i].ec);
	printf("\t\t         Group             ");
	printf("%hd", (elem[i].group));
	printf("\n");
	printf("\t\t         Period            ");
	printf("%hd", (elem[i].period));
	printf("\n");
	printf("\t\t         Block             ");
	printf("%c", (elem[i].block));
	printf("\n");
	printf("\t\t      Atomic Weight        ");
	printf("%.3f", (elem[i].atomicw));
	printf("\n");
	if (elem[i].atomicr == 0)
	{
		printf("\t\t      Atomic Radius        Not Available\n");
	}
	else
	{
		printf("\t\t      Atomic Radius        ");
		printf("%hd", (elem[i].atomicr));
		printf("\n");
	}
	if (elem[i].en == 0)
	{
		printf("\t\t    Electronegativity      Not Available\n");
	}
	else
	{
		printf("\t\t    Electronegativity      ");
		printf("%.3f", (elem[i].en));
		printf(" (Pauling Scale)\n");
	}
	if (elem[i].meltp == 0)
	{
		printf("\t\t       Melting Point       Not Available\n");
	}
	else
	{
		printf("\t\t       Melting Point       ");
		printf("%.3f", (elem[i].meltp));
		printf("K\n");
	}
	if (elem[i].boilp == 0)
	{
		printf("\t\t       Boiling Point       Not Available\n");
	}
	else
	{
		printf("\t\t       Boiling Point       ");
		printf("%.3f", (elem[i].boilp));
		printf("K\n");
	}
	if (elem[i].density == 0)
	{
		printf("\t\t         Density           Not Available\n");
	}
	else
	{
		printf("\t\t         Density           ");
		printf("%.3f", (elem[i].density));
		printf(" gm/cm3\n");
	}
}
void write_data()
{
	int i = 0;
	char file_name[50], choice, data, resume = 'y';
	printf("Write and Save Important Question Answers...Y/N?\n");
	scanf(" %c", &choice);

	if (choice == 'y' || choice == 'Y')
	{
	write:
		printf("Enter your File Name (With Extension): ");
		__fpurge(stdin); // Clear buffer memory to avoid new line(Enter) as string input
		gets(file_name);
		FILE *fp1 = fopen(file_name, "r"); // Read mode first to test file existance
		if (fp1 == NULL)
		{
			// If file doesn't exist, write data in new file
			FILE *fp = fopen(file_name, "w");
			store_loop(fp); // Data writing function
			fclose(fp);
		}
		else
		{
			// Error if file already exists
			printf("\n\t\tThere already exists a File with ID: %s\t\tTry different ID!\n", file_name);
			fclose(fp1);
			goto write;
		}
	}
	printf("\n\t\t\tData Stored Successfully!");
	getchar();
}
void read_data()
{
	int new_line = 0, word_num;
	char file_name[50], choice;
	char search_word[100], word_group[50][50];
read:
	printf("\nEnter the File Name (With Extension) to study: ");
	__fpurge(stdin); // Clear buffer memory to avoid new line(Enter) as string input
	gets(file_name);
	FILE *fp1 = fopen(file_name, "r"); // Check file availability
	if (fp1 == NULL)
	{ // Error if file not available
		printf("\nNo such File available!\tPlease enter available File ID\n");
		goto read;
	}
	new_line = count_lines(fp1); // Count number of lines in file
	printf("\t\t\t\tHow do you want to access your question-answers?\n");
	usleep(1000 * 1000); // Stop program for 1 second
	printf("\t\t\t1. See all questions\t\t");
	usleep(1000 * 500);
	printf("2. Search by typing question\n\n");
	usleep(1000 * 500);
	printf("\t\t\t\tSelect your choice: ");
	scanf(" %c", &choice);
	switch (choice)
	{
	case '1':
		print_data(file_name, fp1, new_line);
		break;
	case '2':
	search:
		// Reset variables for every search
		word_num = 0;
		search_word[0] = '\0';
		word_group[0][0] = '\0';
		// Take search input and breakdown words
		split_string(search_word, word_group, &word_num);
		// Search input words in file and print
		search_engine(fp1, word_group, word_num, file_name, new_line);
		printf("\n\n\t\tDo you want to search again? (Y/N)");
		scanf(" %c", &choice);
		if (choice == 'y' || choice == 'Y')
		{
			goto search; // Research if required result not found
		}
		break;
	default:
		printf("\n\t\t\tInvalid Selection");
	}
	fclose(fp1);
	printf("\n\t\t\tPress any key to exit: ");
	getchar();
}
void edit_data()
{
	int i = 0, new_line = 0;
	char file_name[50], data, resume = 'y';
edit:
	printf("\nEnter the File Name (With Extension) to modify: ");
	__fpurge(stdin); // Clear buffer memory to avoid new line(Enter) as string input
	gets(file_name);
	FILE *fp1 = fopen(file_name, "r"); // Check file availability
	if (fp1 == NULL)
	{ // Error if file not available to edit
		printf("\nNo such File available!\tPlease enter available File ID\n");
		goto edit;
	}
	fclose(fp1);
	// Append mode if file available
	fp1 = fopen(file_name, "a");
	store_loop(fp1); // Add data in append mode
	fclose(fp1);
	printf("\n\t\t\tData added Successfully!");
	getchar();
}
void store_loop(FILE *fp1)
{ // Data writing function
	char resume = 'y', data;
	int i;
	while (resume == 'y' || resume == 'Y')
	{
		i++;
		printf("Enter your Question:");
		printf("\t\t(Press 'Enter' to finish question)\n\n");
		__fpurge(stdin);
		while (1)
		{
			data = getchar();
			putc(data, fp1); // Put input character in file
			if (data == '\n')
			{ // New line means turn for answer
				printf("\nWrite your answer:\n");
				__fpurge(stdin);
				while (1)
				{
					data = getchar();
					putc(data, fp1);
					if (data == '\n')
					{ // Another new line means turn for next question-answer
						goto resume;
					}
				}
			}
		}
	resume:
		printf("Do you want to add more...Y/N?");
		scanf(" %c", &resume); // Loop continues if resume is 'y' or 'Y'
	}
}
int count_lines(FILE *fp)
{
	char data;
	int new_line = 0;
	fseek(fp, 0, SEEK_SET);			 // Set cursor to initial position
	while ((data = getc(fp)) != EOF) // Continue data read until End Of File
	{
		if (data == '\n')
		{
			new_line++; // Count new lines
		}
	}
	fseek(fp, 0, SEEK_SET); // Reset cursor to initial position as before
	return (new_line);
}
void print_data(char topic[], FILE *fp, int new_line)
{ // Print everything in a file with question-answer format
	int count = 0, line_num = 0, i = 1;
	char data, bullet = '1';

	printf("Question Answers of %s are:\n\n", topic);
	printf("Question (%d) >>>>\n", i);
	while ((data = getc(fp)) != EOF) // loop until EOF
	{
		if (data == '\n')
		{
			count = 0;				  // 'count' used to count number of characters printed from a single line
			line_num++;				  // Counts the number of lines printed
			if (line_num == new_line) // Checks if number of lines printed == total number of line
			{
				printf(" ");
			}
			// Flip turns for printing "Question" and "Ans"
			else if (bullet == '1')
			{ // Print "Ans" if previously "Question" was printed
				printf("\nAns:\t");
				bullet = '0';
			}
			else if (bullet == '0')
			{
				i++;
				printf("\n\nQuestion (%d) >>>>\t", i);
				bullet = '1';
			}
		}
		printf("%c", data);
		count++;
		if (count >= CHAR_LIMIT && data == ' ')
		{			   // Print new line if number of characters printed from single line exceeds limit
			count = 0; // Reset character counter for new line
			printf("\n");
		}
	}
}
void search_engine(FILE *fp1, char word_group[50][50], int word_num, char file_name[], int new_line)
{
	char file_word[50];
	char data;
	int i = 0, j = 0, k = 0, l = 0;
	int line_num = 1, match_num = 0, line[100] = {0}, match[100] = {0};
	while (1)
	{
		__fpurge(stdin);
		// Store character
		data = fgetc(fp1);
		// Check if data is new line or whitespace or doesn't belong to alphabet and numbers
		if (((data < 64 || data > 90) && (data < 97 || data > 122) && (data < 48 || data > 57)) || data == '\n')
		{
			file_word[i] = '\0'; // End the string to store a single word
			line[k] = line_num;	 // Store line number on array
			if (data == '\n')
			{
				line_num++; // Count line numbers read from file
				k++;		// Increment index for next line number
				j++;		// Increment index for next match number
				match_num = 0;
			}
			// Compare word from file and input word
			if ((strcmp(strlwr(file_word), strlwr(word_group[l]))) == 0)
			{
				match_num++;		   // Count number of matching words
				match[j] += match_num; // Addup matches until new line increments 'j'
			}

			strcpy(file_word, "\0"); // Reset string to store next file word
			i = 0;					 // Sets index of file_word string to 0

			if (data == EOF)
			{
				fseek(fp1, 0, SEEK_SET); // Reset cursor for searching next input word
				if (l == (word_num - 1))
				{
					goto one; // End search if all words are searched
				}
				j = 0;		  // Reset 'j' for next input word match
				k = 0;		  // Reset 'k' for next input word line number
				line_num = 1; // Reset line number for next input word
				l++;		  // Count number of input words searched
			}
		}
		else
		{
			file_word[i] = data; // Normally store characters
			i++;
		}
	}
one:
	// Sort the line and match array in descending order
	descend_array(line, match, new_line);

	for (i = 0; i < new_line; i++)
	{ // Check if first line number is even(means Answer line)
		if (line[i] % 2 == 0)
		{ // Check if the even line has matches or not
			if (match[i] != 0)
			{
				for (j = 0; j < new_line; j++)
				{ // Detect even(answer) line number's corresponding odd(question) line
					if (line[j] == line[i] - 1)
					{ // Check if the odd(question) line has matches or not
						if (match[j] != 0)
						{
							match[j] = 0; // Set match to 0 to avoid double printing of same question-answer
						}
					}
				}
			}
		}
		else
		{ // Similar test for odd(question) line number
			if (match[i] != 0)
			{
				for (j = 0; j < new_line; j++)
				{
					if (line[j] == line[i] + 1)
					{
						if (match[j] != 0)
						{
							match[j] = 0;
						}
					}
				}
			}
		}
	}
	printf("\nSorted Search results from %s file are :>>>>>>>>>>", file_name);
	j = 0; // Reset for reuse
	for (i = 0; i < new_line; i++)
	{
		if (match[i] != 0) // Print only if line has matches
		{
			j++; // Count question number
			dual_lineprint(fp1, line[i], j);
		}
	}
}
void split_string(char search[100], char group[50][50], int *num)
{
	int i;
	char *ptr1;
	// User Search Input
	printf("Type your question/answer:\t\t\t(Atleast type some matching keywords)\n");
	__fpurge(stdin);
	gets(search);
	// Convert all the non-alphabet and non-numeric characters to whitespace
	for (i = 0; search[i] != '\0'; i++)
	{
		if ((search[i] < 64 || search[i] > 90) && (search[i] < 97 || search[i] > 122) && (search[i] < 48 || search[i] > 57))
		{
			search[i] = ' ';
		}
	}
	i = 0;						// Reset for reuse
	ptr1 = strchr(search, ' '); // Check if there are multiple words separated by whitespace
	if (ptr1 != NULL)			// If whitespace detected, split the words
	{
		ptr1 = strtok(search, " "); // 'ptr1' points to first splitted word from input sentence
		// Use loop for 'ptr1' to point to next words of sentence
		while (ptr1 != NULL)
		{
			(*num)++;				  // Count number of words splitted
			strcpy(group[i], ptr1);	  // Store current pointed word in string array
			ptr1 = strtok(NULL, " "); // Point to next occuring words from previous sentence
			i++;
		}
	}
	else // If no whitespace detected, simply store word
	{
		*num = 1; // Set number of words to 1
		strcpy(group[i], search);
	}
}
void descend_array(int array1[], int array2[], int size)
{ // Sorting array according to highest match found
	int i, j, temp1, temp2;
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{							   //  Comparing array2 means comparing match
			if (array2[i] < array2[j]) // If 'ith' element is less than 'jth' element then swap
			{
				temp1 = array1[j];
				temp2 = array2[j];
				array1[j] = array1[i]; // Swap equivalent line array
				array2[j] = array2[i]; // Swap main match array
				array1[i] = temp1;
				array2[i] = temp2;
			}
		}
	}
}
void dual_lineprint(FILE *fp, int line, int j)
{ // Auto detect answer and question line and print whole Question-Answer
	int count = 1, limit = 0, char_num = 0, line_num = 0;
	char data;
	// Printing starts from question(odd) line. So, check line
	if (line % 2 == 0)
	{ //  Set the even(answer) line to odd(question) line
		line = line - 1;
	}
	printf("\n\nQuestion (%d) >>>>\n", j);
	while ((data = getc(fp)) != EOF) // Loop until EOF
	{
		if (data == '\n')
		{
			count++; // Count line numbers read
		}
		if (count == line) // If the matching line number is found, print
		{
			if (line == 1)
			{ // Reset cursor if match found in 1st line since, cursor moves 1 step forward due to 'getc' above
				fseek(fp, 0, SEEK_SET);
			}
			// Only print two lines(question-answer)
			while ((data = getc(fp)) != EOF)
			{
				if (data == '\n')
				{
					char_num = 0; // Reset character number counter for next line
					limit++;	  // Count lines printed
					if (limit == 2)
					{
						goto end; // Stop printing if 2 lines completed
					}
					printf("\nAns:"); // Print "Ans" after "Question" completed
				}
				printf("%c", data);
				char_num++; // Count charcters printed
				if (char_num >= CHAR_LIMIT && data == ' ')
				{
					char_num = 0; // Reset character number counter for next line
					printf("\n"); //  Print new line if character limit exceeded
				}
			}
		}
	}
end:
	fseek(fp, 0, SEEK_SET); // Reset cursor for reuse
}