#include <stdio.h>
#include <limits.h>
#include <float.h>

/*
	Name: CIO (C input/output)
	Version: 0.1
	Author: Diego Moreira
	Licence: MIT
*/

// Variável referente à erro em funções
int cioerr = 0;

/* Prototypes */
// Clear input buffer
void clear_in();

// Input/Output int
int get_int();
int sget_int(char *s);
void put_int(int i);

// Input/Output unsigned int
unsigned int get_uint();
unsigned int sget_uint(char *s);
void put_uint(unsigned int i);

// Input/Output long
long get_long();
long sget_long(char *s);
void put_long(long l);

// Input/Output unsigned long
unsigned long get_ulong();
unsigned long sget_ulong(char *s);
void put_ulong(unsigned long l);

// Input/Output long long
long long get_llong();
long long sget_llong(char *s);
void put_llong(long long ll);

// Input/Output unsigned long long
unsigned long long get_ullong();
unsigned long long sget_ullong(char *s);
void put_ullong(unsigned long long ll);

// Input/Output short
short get_short();
short sget_short(char *s);
void put_short(short s);

// Input/Output unsigned short
unsigned short get_ushort();
unsigned short sget_ushort(char *s);
void put_ushort(unsigned short s);

// Input/Output float
float get_float();
float sget_float(char *s);
void put_float(float f);

// Input/Output double
double get_double();
double sget_double(char *s);
void put_double(double d);

// Input/Output long double
long double get_ldouble();
long double sget_ldouble(char *s);
void put_ldouble(long double ld);

// Input/Output char
char get_char();
char sget_char(char *s);
void put_char(char c);

// Input/Output unsigned char
unsigned char get_uchar();
unsigned char sget_uchar(char *s);
void put_uchar(unsigned char c);

// Input/Output string
void get_string(char *s);
void sget_string(char *sg, char *s);
void put_string(char *s);

// New lines
void newline(int cout);

// File handling
// Read file content
int rf_content(char *d, char *s, int b);

// Read file content
int wf_content(char *d, char *s);

void clear_in() {
	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF);
}

// Input int
int get_int() {
	int i;
	long long ll;
	if (scanf("%lld", &ll) != 1 || ll < INT_MIN || ll > INT_MAX) {
		cioerr = 1;
	} else {
		i = (int)ll;
		cioerr = 0;
		
	}
	clear_in();
	return i;
}

// Input int with string
int sget_int(char *s) {
	int i;
	long long ll;
	printf("%s", s);
	if (scanf("%lld", &ll) != 1 || ll < INT_MIN || ll > INT_MAX) {
		cioerr = 1;
	} else {
		i = (int)ll;
		cioerr = 0;
		
	}
	clear_in();
	return i;
}

// Output int
void put_int(int i) {
	printf("%d", i);
}

// Input unsigned int
unsigned int get_uint() {
	unsigned int i;
	long long ll;
	if (scanf("%lld", &ll) != 1 || ll < 0 || ll > UINT_MAX) {
		cioerr = 1;
	} else {
		i = (unsigned int)ll;
		cioerr = 0;
		
	}
	clear_in();
	return i;
}

// Input unsigned int with string
unsigned int sget_uint(char *s) {
	unsigned int i;
	long long ll;
	if (scanf("%lld", &ll) != 1 || ll < 0 || ll > UINT_MAX) {
		cioerr = 1;
	} else {
		i = (unsigned int)ll;
		cioerr = 0;
		
	}
	clear_in();
	return i;
}

// Output unsigned int
void put_uint(unsigned int i) {
	printf("%u", i);
}

// Input long
long get_long() {
	long l;
	long long ll;
	if (scanf("%lld", &ll) != 1 || ll < LONG_MIN || ll > LONG_MAX) {
		cioerr = 1;
	} else {
		l = (long)ll;
		cioerr = 0;
		
	}
	clear_in();
	return l;
}

// Input long with string
long sget_long(char *s) {
	long l;
	printf("%s", s);
		long long ll;
	if (scanf("%lld", &ll) != 1 || ll < LONG_MIN || ll > LONG_MAX) {
		cioerr = 1;
	} else {
		l = (long)ll;
		cioerr = 0;
		
	}
	clear_in();
	return l;
}

// Output long
void put_long(long l) {
	printf("%ld", l);
}

// Input unsigned long
unsigned long get_ulong() {
	unsigned long l;
	long long ll;
	if (scanf("%lld", &ll) != 1 || ll < 0 || ll > ULONG_MAX) {
		cioerr = 1;
	} else {
		l = (unsigned long)ll;
		cioerr = 0;
		
	}
	clear_in();
	return l;
}

// Input unsigned long with string
unsigned long sget_ulong(char *s) {
	unsigned long l;
	printf("%s", s);
	long long ll;
	if (scanf("%lld", &ll) != 1 || ll < 0 || ll > ULONG_MAX) {
		cioerr = 1;
	} else {
		l = (unsigned long)ll;
		cioerr = 0;
		
	}
	clear_in();
	return l;
}

// Output unsigned long
void put_ulong(unsigned long l) {
	printf("%lu", l);
}

// Input long long
long long get_llong() {
	long long ll;
	long double ld;
	if (scanf("%Lf", &ld) != 1 || ld < LLONG_MIN || ld > LLONG_MAX) {
		cioerr = 1;
	} else {
		ll = (long long)ld;
		cioerr = 0;
	}
	clear_in();
	return ll;
}

// Input long long with string
long long sget_llong(char *s) {
	long long ll;
	printf("%s", s);
	long double ld;
	if (scanf("%Lf", &ld) != 1 || ld < LLONG_MIN || ld > LLONG_MAX) {
		cioerr = 1;
	} else {
		ll = (long long)ld;
		cioerr = 0;
	}
	clear_in();
	return ll;
}

// Output long long
void put_llong(long long ll) {
	printf("%lld", ll);
}

// Input unsigned long long
unsigned long long get_ullong() {
	unsigned long long ll;
	long double ld;
	if (scanf("%Lf", &ld) != 1 || ld < 0 || ld > ULLONG_MAX) {
		cioerr = 1;
	} else {
		ll = (unsigned long long)ld;
		cioerr = 0;
	}
	clear_in();
	return ll;
}

// Input unsigned long long with string
unsigned long long sget_ullong(char *s) {
	unsigned long long ll;
	printf("%s", s);
	long double ld;
	if (scanf("%Lf", &ld) != 1 || ld < 0 || ld > ULLONG_MAX) {
		cioerr = 1;
	} else {
		ll = (unsigned long long)ld;
		cioerr = 0;
	}
	clear_in();
	return ll;
}

// Output unsigned long long
void put_ullong(unsigned long long ll) {
	printf("%llu", ll);
}

// Input short
short get_short() {
	short s;
	int i;
	if (scanf("%d", &i) != 1 || i < SHRT_MIN || i > SHRT_MAX) {
		cioerr = 1;
	} else {
		s = (short)i;
		cioerr = 0;
	}
	clear_in();
	return s;
}

// Input short with string
short sget_short(char *s) {
	short st;
	printf("%s", s);
	int i;
	if (scanf("%d", &i) != 1 || i < SHRT_MIN || i > SHRT_MAX) {
		cioerr = 1;
	} else {
		st = (short)i;
		cioerr = 0;
	}
	clear_in();
	return st;
}

// Output short
void put_short(short s) {
	printf("%hd", s);
}

// Input unsigned short
unsigned short get_ushort() {
	unsigned short s;
	int i;
	if (scanf("%d", &i) != 1 || i < 0 || i > USHRT_MAX) {
		cioerr = 1;
	} else {
		s = (unsigned short)i;
		cioerr = 0;
	}
	clear_in();
	return s;
}

// Input unsigned short with string
unsigned short sget_ushort(char *s) {
	unsigned short st;
	printf("%s", s);
	int i;
	if (scanf("%d", &i) != 1 || i < 0 || i > USHRT_MAX) {
		cioerr = 1;
	} else {
		st = (unsigned short)i;
		cioerr = 0;
	}
	clear_in();
	return st;
}

// Output unsigned short
void put_ushort(unsigned short s) {
	printf("%hu", s);
}

// Input float
float get_float() {
	float f;
	long double ld;
	if (scanf("%Lf", &ld) != 1 || ld < FLT_MIN || ld > FLT_MAX) {
		cioerr = 1;
	} else {
		f = (float)ld;
		cioerr = 0;
	}
	clear_in();
	return f;
}

// Input float with string
float sget_float(char *s) {
	float f;
	printf("%s", s);
	long double ld;
	if (scanf("%Lf", &ld) != 1 || ld < FLT_MIN || ld > FLT_MAX) {
		cioerr = 1;
	} else {
		f = (float)ld;
		cioerr = 0;
	}
	clear_in();
	return f;
}

// Output float
void put_float(float f) {
	printf("%f", f);
}

// Input double
double get_double() {
	double d;
	long double ld;
	if (scanf("%Lf", &ld) != 1 || ld < DBL_MIN || ld > DBL_MAX) {
		cioerr = 1;
	} else {
		d = (float)ld;
		cioerr = 0;
	}
	clear_in();
	return d;
}

// Input double with string
double sget_double(char *s) {
	double d;
	printf("%s", s);
	long double ld;
	if (scanf("%Lf", &ld) != 1 || ld < DBL_MIN || ld > DBL_MAX) {
		cioerr = 1;
	} else {
		d = (float)ld;
		cioerr = 0;
	}
	clear_in();
	return d;
}

// Output double
void put_double(double d) {
	printf("%lf", d);
}

// Input long double
long double get_ldouble() {
	long double ld;
	if (scanf("%Lf", &ld) != 1) {
		cioerr = 1;
	} else {
		cioerr = 0;
	}
	return ld;
}

// Input long double with string
long double sget_ldouble(char *s) {
	long double ld;
	printf("%s", s);
	if (scanf("%Lf", &ld) != 1) {
		cioerr = 1;
	} else {
		cioerr = 0;
	}
	return ld;
}

// Output long double
void put_ldouble(long double ld) {
	printf("%Lf", ld);
}

// Input char
char get_char() {
	char c;
	int i;
	if (scanf("%d", &i) != 1 || i < CHAR_MIN || i > CHAR_MAX) {
		cioerr = 1;
	} else {
		c = (char)i;
		cioerr = 0;
	}
	clear_in();
	return c;
}

// Input char with string
char sget_char(char *s) {
	char c;
	printf("%s", s);
	int i;
	if (scanf("%d", &i) != 1 || i < CHAR_MIN || i > CHAR_MAX) {
		cioerr = 1;
	} else {
		c = (char)i;
		cioerr = 0;
	}
	clear_in();
	return c;
}

// Output char
void put_char(char c) {
	printf("%c", c);
}

// Input unsigned char
unsigned char get_uchar() {
	unsigned char c;
	int i;
	if (scanf("%d", &i) != 1 || i < 0 || i > UCHAR_MAX) {
		cioerr = 1;
	} else {
		c = (unsigned char)i;
		cioerr = 0;
	}
	clear_in();
	return c;
}

// Input unsigned char with string
unsigned char sget_uchar(char *s) {
	unsigned char c;
	printf("%s", s);
	int i;
	if (scanf("%d", &i) != 1 || i < 0 || i > UCHAR_MAX) {
		cioerr = 1;
	} else {
		c = (unsigned char)i;
		cioerr = 0;
	}
	clear_in();
	return c;
}

// Output unsigned char
void put_uchar(unsigned char c) {
	printf("%u", c);
}

// Input string
void get_string(char *s) {
	if (scanf("%s", s) != 1) {
		cioerr = 1;
	} else {
		cioerr = 0;
	}
}

// Input string with string
void sget_string(char *sg, char *s) {
	printf("%s", sg);
	if (scanf("%s", s) != 1) {
		cioerr = 1;
	} else {
		cioerr = 0;
	}
}

// Output string
void put_string(char *s) {
	printf("%s", s);
}

// New lines
void newline(int cout) {
	for (int x = 0; x < cout; x++) {
		printf("\n");
	}
}

int rf_content(char *d, char *s, int b) {
	// Open file for read
	FILE *archive = fopen(d, "r");
	char buffer[b];
    
	// Variables for read chars
	int ch;
	int x = 0;

	// If file content is null or no content
	if (archive == NULL) {
		return -1; // Error
	}

	// Read characters
	while ((ch = fgetc(archive)) != EOF) {
		if (x < b - 1) {
			buffer[x] = (char)ch;
			x++;
		} else {
			break;
		}
	}

	// Add character null in buffer end
	buffer[x] = '\0';

	// Copy content buffer in string pointer
	for (int z = 0; z < b; z++) {
		if (buffer[x] == '\0') {
			s[z] = buffer[z];
			break;
		} else {
			s[z] = buffer[z];
		}
	}

	// File close
	fclose(archive);
	return 0;
}

int wf_content(char *d, char *s) {
	// Open file for write
	FILE *archive = fopen(d, "w");

	// Check file open
	if (archive == NULL) {
		return -1; // Error
	}

	// Write string in file
	fprintf(archive, "%s", s);

	// File close
	fclose(archive);
    
	return 0;
}