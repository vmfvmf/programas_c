
int FAT(int a);
main(){
       int n;
       scanf("%d",&n);
       printf("%d", FAT(n));
       system("pause");
}
int FAT(int  n ){ return (n == 0) ? 1 : n * FAT(n-1); }
int FAT(char* a){ return (a>1) ? a * FAT(a-1) : 1; }
string "simples/0"

[]
