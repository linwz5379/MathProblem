#include <stdio.h>
int a,b,c,d,e,f,g,h,num = 0;
int n=8;
int main(){
	for(int a =1;a<=n;a++){
		for(int b =1;b<=n;b++){
			for(int c =1;c<=n;c++){
				for(int d =1;d<=n;d++){
					for(int e =1;e<=n;e++){
						for(int f =1;f<=n;f++){
							for(int g =1;g<=n;g++){
								for(int h =1;h<=n;h++){
									if((a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(a!=f)&&(a!=g)&&(a!=h)&&(b!=c)&&(b!=d)&&(b!=e)&&(b!=f)&&(b!=g)&&(b!=h)&&(c!=d)&&(c!=e)&&(c!=f)&&(c!=g)&&(c!=h)&&(d!=e)&&(d!=f)&&(d!=g)&&(d!=h)&&(e!=f)&&(e!=g)&&(e!=h)&&(f!=g)&&(f!=h)&&(g!=h)){
									if((a>b)&&(b<c)&&(c>d)&&(d<e)&&(e>f)&&(f<g)&&(g>h)){
										int number = 10000000*a+1000000*b+100000*c+10000*d+1000*e+100*f+10*g+h;
										num +=1;
										printf("%d %d\n",number,num);
									}
									if((a<b)&&(b>c)&&(c<d)&&(d>e)&&(e<f)&&(f>g)&&(g<h)){
										int number = 10000000*a+1000000*b+100000*c+10000*d+1000*e+100*f+10*g+h;
										num +=1;
										printf("%d %d\n",number,num);
									}
									else{
										continue;
									}
									}
									else{
										continue;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
} 