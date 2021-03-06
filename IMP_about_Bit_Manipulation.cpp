Get Bit:
int getBit(int num, int i)
{
   // 1<<i is left shift 1 by i times and taking and 
  // 00000110101
 //& 00000100000 ->  1<<5 
    int x = num & (1 << i);
	return x;
}

Set Bit:
int setBit(int num, int i)
{	
	// taking or of 1 with that bit makes it set (1)
	int x = num | (1 << i);
	return x;
}

Clear Bit:
int clearBit(int num, int i)
{
	// making 0 to ith position and and on them to get 0 
	int mask = ~(1 << i);
	int x = num & mask;
	return x;
}

 cout <<"8<<1 = "<< (8<<1) << endl; // right shift multiply by 2 .... 8*2 = 16
 cout <<"8>>1 = "<< (8>>1) << endl; // left shift divide by 2 .... 8/2 = 4

 int i = 3; 
   cout <<"pow(2, 3) = " << (1 << i) << endl;  //100 -> 8
	// as 4 is 100 , 2 is 10 , 8 is 1000 so for pow of two leftmost bit is set rest are zero 

   if(x & 1) cout<<"Odd"  // odd numbers last bit is 1 so 1 & 1 -> 1
   else  cout<< "Even" ;


int isPowerOfTwo (int x)
{
    if(x==0) return 0;
	return !(x&(x-1)); // x and x-1 is 0 then x is pow  
}
    //    4 100 & 11 3 -> 000     pow of 2    and 
    //    6 110 & 101 5 -> 100    not pow of 2	

  Number of leading zeroes: __builtin_clz(x)
  Number of trailing zeroes : __builtin_ctz(x)
  Number of 1-bits: __builtin_popcount(x) 
	  
// rightmost set bit
	  int  x = log2(n&(-n))+1; 
//or we can do 
	int n = 5;
     	int x = (~n) +1;
        cout << log2(n&x) + 1 << endl;
// as -n and (~n) +1 are same 

log2(n) + 1; gives only set bit in number 

bitset<8>(10)  gives number in bits 1010 for 10 and likewise
cout<< 0b0101 ; give output 5 useed to conver bit to decimal

// Convert uppercase character to lowercase
for (char ch = 'A'; ch <= 'Z'; ch++) {
    cout << char(ch | ' '));        // prints abcdefghijklmnopqrstuvwxyz
}


// Convert lowercase character to uppercase
for (char ch = 'a'; ch <= 'z'; ch++) {
    cout << char(ch & '_'));    // prints ABCDEFGHIJKLMNOPQRSTUVWXYZ
}

