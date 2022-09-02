#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void findandreplace(char mainstring[], char find[], char replace[]){
	int lenmainstring;
	int lenfind;
	int lenreplace;
	int a=0;
	int b, c;
	int flag=0;
	int start,  end;
	
	lenmainstring=sizeof(mainstring);
	lenfind=sizeof(find);
	lenreplace=sizeof(replace);
	
	for(a=0; a<lenmainstring; a++){
		flag=0;
		start=a;
		for(b=0; mainstring[a]==find[b]; b++, a++){
			if (b==lenfind-1){
				flag=1;
				end=a;
			}
			if(flag==0){
				a-=b;
			}
			else{
				for(b=start; b<end; b++){
					for(c=start; c<lenmainstring; c++){
						mainstring[c]=mainstring[c+1];
						lenmainstring--;
						a--;
					}
				}
				for(b=start; b<start+lenreplace; b++){
					for(c=lenmainstring; c>=b; c--){
						mainstring[c+1]=mainstring[c];
						mainstring[b]=replace[b-start];
						lenmainstring++;
						a++;
					}
				}
			}
		}
	}
}
