//Porpora Federico 0001114450 10/01/2024
int myMin(int a, int b);
int myMax(int a, int b);
int myMCD(int a, int b);
int myMcm(int a, int b);
int myFattoriale(int a);
int myPow(int a, int b);
int myCoeffBin(int n, int k);
double myLog(double a, double b);
int mySumUnder(int a);
int myLen(int a);
int myPalindromo(int x);
int mySqrt(int x);
void myStampaVettori(int arr[], int len);
int myRiempiVettori(int arr[], int size);
int myRemoveDuplicates(int arr[], int len1, int noDupl[]);
int myRicercaValori(int arr[], int len, int x);
void strConSpazi(char* stringa, int dim);
char* leggi_fino_a(FILE* file, char carattere);
FILE* aperturaFile(const char* fileName, const char* openingMode);
char* inputStringa(const char* frase, int* len);
void scambia(int* a, int* b);
int trovaPosMax(int v[], int n);
void naiveSort(int v[], int n);
void bubbleSort(int v[], int n);
void insOrd(int v[], int pos);
void insertSort(int v[], int n);
void merge(int v[], int i1, int i2, int fine, int vout[]);
void mergeSort(int v[], int first, int last, int vout[]);
void quickSortR(int a[], int iniz, int fine);
void quickSort(int a[], int dim);
int contaRighe(FILE* filePtr);