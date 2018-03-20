
#include<stdio.h>
int row2(int, int );
int row(int ,int ,int );

int ara9[9],ara2[2],ara4[4],ara6[6],ara8[8],ara3[3],ara5[5],ara7[7];
int r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12,r13,r14,r15,r16;

int main()
{
	int tc=0,i;
	int tmp=0,t=0;

				scanf("%d",&tc);
				while(tc--){
					scanf("%d",&r1);
					scanf("%d %d",&r2,&r3); // 54,67
					scanf("%d %d %d",&r4,&r5,&r6); // 10,18,13 // row 5
					scanf("%d %d %d %d",&r8,&r9,&r10,&r11); // row 7
					scanf("%d %d %d %d %d",&r12,&r13,&r14,&r15,&r16);  // row 9

					tmp=row2(r2,r3); // x
					// array three
					ara3[0]=r2;
					ara3[1]=tmp;
					ara3[2]=r3;
				// array two
					ara2[0]=tmp+r2;
					ara2[1]=tmp+r3;

					tmp=row(r2,r4,r5); // n
					t=row(r3,r5,r6);  // m

					// array five
					ara5[0]=r4;
					ara5[1]=tmp;
					ara5[2]=r5;
					ara5[3]=t;
					ara5[4]=r6;

							// array four
						ara4[0]=r4+tmp;
						ara4[1]=tmp+r5;
						ara4[2]=r5+t;
						ara4[3]=t+r6;

						// row seven
						ara7[0]=r8;
						ara7[1]=row(r4,r8,r9);
						ara7[2]=r9;
						ara7[3]=row(r5,r9,r10);
						ara7[4]=r10;
						ara7[5]=row(r6,r10,r11);
						ara7[6]=r11;

							// row six
										for(i=0;i<=5;i++){
										ara6[i]=ara7[i]+ara7[i+1];
									     }


								// row nine
										ara9[0]= r12;
										ara9[1]= row(r8,r12,r13);
										ara9[2]= r13;
										ara9[3]= row(r9,r13,r14);
										ara9[4]= r14;
										ara9[5]= row(r10,r14,r15);
										ara9[6]= r15;
										ara9[7]= row(r11,r15,r16);
										ara9[8]= r16;

									// row eight
									for(i=0;i<=7;i++){
										ara8[i]=ara9[i]+ara9[i+1];
									}


						printf("%d\n",r1);
						printf("%d %d\n",ara2[0],ara2[1]); // ok
						printf("%d %d %d\n",ara3[0],ara3[1],ara3[2]); // ok
						printf("%d %d %d %d\n",ara4[0],ara4[1],ara4[2],ara4[3]); // ok
						printf("%d %d %d %d %d\n",ara5[0],ara5[1],ara5[2],ara5[3],ara5[4]); // ok
						printf("%d %d %d %d %d %d\n",ara6[0],ara6[1],ara6[2],ara6[3],ara6[4],ara6[5]); // ok
						printf("%d %d %d %d %d %d %d\n",ara7[0],ara7[1],ara7[2],ara7[3],ara7[4],ara7[5],ara7[6]); // ok
						printf("%d %d %d %d %d %d %d %d\n",ara8[0],ara8[1],ara8[2],ara8[3],ara8[4],ara8[5],ara8[6],ara8[7]); // ok
						printf("%d %d %d %d %d %d %d %d %d\n",ara9[0],ara9[1],ara9[2],ara9[3],ara9[4],ara9[5],ara9[6],ara9[7],ara9[8]); // ok


				}



	return 0;
}

int row2(int r2, int r3)
{
		int x=0,tmp=0;
		tmp=r1-(r2+r3);
		x=tmp/2;

return x;
}

int row(int a, int b,int c)
{
		int n,tmp;
			tmp=a-b-c;
			n=tmp/2;

		return n;
}
