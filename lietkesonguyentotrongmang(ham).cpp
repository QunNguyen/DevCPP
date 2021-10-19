#include<stdio.h>

#include<math.h>

void NhapMang(int a[],int n)

{
                                             int i;

                                             for(i=0;i<n;i++)

                                             {

                                                scanf("%d",&a[i]);

                                             }

}

int Nt(int n)

{

                                             if(n == 1) return 0;

                                             int i;

                                             for(i=2;i<=sqrt(n);i++)

                                                if(n%i == 0)

                                                            return 0;

                                             return 1;

}

void XuatMangNT(int a[],int n)

{
                                             int i;

                                             for(i=0;i<n;i++)

                                             {

                                                if(Nt(a[i]))

                                                {

                                                            printf("%d ",a[i]);
                                                }
                                             }

}
int main()

{

                                            int n;
                                             int a[n];
                                             scanf("%d ",&n);
                                             if(n<1) return 0;

                                             NhapMang(a, n);
                                             XuatMangNT(a, n);

}
