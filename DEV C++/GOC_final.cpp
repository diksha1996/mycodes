#include<bits/stdc++.h>


int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
int ps=10,mf,pa=1,it=5,N=10000,M=1000,flag=1;

int main(){
	int hit,p,x,px,pp,pm;
	string missile;
	char prev;
	p=9060;
	cout<<p<<endl;
	for(int i=0;i<M;i++){
		if(i==0){
			cin>>hit;
			if(hit==0){
				p=0;
				x=5000;
				missile= "xFalcon";
				pm=1;
			}
			else{
				p=8485;
				x=5000;
				missile= "xFalcon";
				pm=1;
			}
		}
		else{
			cin>>hit>>prev;
			if(hit==0){
				if(prev=='0')
				{
				x=5000;
				missile="xFalcon";
				pm=1;
			}
			else if(prev=='+'){
				px=x;
				if(pm==1){
					x = (N-px)/2+1;
					if((x-px) <= 400&& ((x-px) >200 )&& pa!=0){
						x = px+(x-px)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(x-px <=200&&ps!=0){
						x = px+(x-px)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else if(N-x <= 400&& N-x >200&&pa!=0){
						x = x+(N-x)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(N-x <=200&&ps!=0){
						x = x+(N-x)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else
					{
					    missile="xFalcon";	
					}
				}
				else if(pm==2){
					px = min(N,px+100);
					x = (px+N)/2;
					if(x-px <= 400&& x-px >200&&pa!=0){
						x = px+(x-px)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(x-px <=200&&ps!=0){
						x = px+(x-px)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else if(N-x <= 400&& N-x >200&&pa!=0){
						x = x+(N-x)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(N-x <=200&&ps!=0){
						x = x+(N-x)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else
					{
					    missile="xFalcon";	
					}
					
				}
				else{
					px = min(N,px+200);
					x = (px+N)/2;
					if(x-px <= 400&& x-px >200&&pa!=0){
						x = px+(x-px)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(x-px <=200&&ps!=0){
						x = px+(x-px)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else if(N-x <= 400&& N-x >200&&pa!=0){
						x = x+(N-x)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(N-x <=200&&ps!=0){
						x = x+(N-x)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else
					{
					    missile="xFalcon";	
					}	
				}
				
			}
			else
			{
				px=x;
				if(pm==1){
					x = (px-1)/2+1;
					if(px-x <= 400&& px-x >200&&pa!=0){
						x = x+(px-x)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(px-x <=200&&ps!=0){
						x = x+(px-x)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else if(x-1 <= 400&& x-1 >200&&pa!=0){
						x = 1+(x-N)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(x-1 <=200&&ps!=0){
						x = 1+(x-1)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else
					{
					    missile="xFalcon";	
					}
				}
				else if(pm==2){
					px = max(1,px-100);
					x = (px+1)/2;
						if(px-x <= 400&& px-x >200&&pa!=0){
						x = x+(px-x)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(px-x <=200&&ps!=0){
						x = x+(px-x)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else if(x-1 <= 400&& x-1 >200&&pa!=0){
						x = 1+(x-N)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(x-1 <=200&&ps!=0){
						x = 1+(x-1)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else
					{
					    missile="xFalcon";	
					}
					
				}
				else{
					px = max(1,px-200);
					x = (px+1)/2;
						if(px-x <= 400&& px-x >200&&pa!=0){
						x = x+(px-x)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(px-x <=200&&ps!=0){
						x = x+(px-x)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else if(x-1 <= 400&& x-1 >200&&pa!=0){
						x = 1+(x-N)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(x-1 <=200&&ps!=0){
						x = 1+(x-1)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else
					{
					    missile="xFalcon";	
					}
			}
			}
			if(it!=0&&flag%12==0){
				if(p+9000<=N)
				p=9000+p;
				else
				p = p-498;
				it--;
				flag++;
			}
			else
			p=0;
		}
			else{
				if(p+589<=N)
				p=p+589;
				else 
				p=p-298;
				
				if(prev=='0')
				{
				x=5000;
				missile="xFalcon";
				pm=1;
			}
			else if(prev=='+'){
				px=x;
				if(pm==1){
					x = (N-px)/2+1;
					if(x-px <= 400&& x-px >200&&pa!=0){
						x = px+(x-px)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(x-px <=200&&ps!=0){
						x = px+(x-px)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else if(N-x <= 400&& N-x >200&&pa!=0){
						x = x+(N-x)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(N-x <=200&&ps!=0){
						x = x+(N-x)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else
					{
					    missile="xFalcon";	
					}
				}
				else if(pm==2){
					px = min(N,px+100);
					x = (px+N)/2;
					if(x-px <= 400&& x-px >200&&pa!=0){
						x = px+(x-px)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(x-px <=200&&ps!=0){
						x = px+(x-px)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else if(N-x <= 400&& N-x >200&&pa!=0){
						x = x+(N-x)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(N-x <=200&&ps!=0){
						x = x+(N-x)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else
					{
					    missile="xFalcon";	
					}
					
				}
				else{
					px = min(N,px+200);
					x = (px+N)/2;
					if(x-px <= 400&& x-px >200&&pa!=0){
						x = px+(x-px)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(x-px <=200&&ps!=0){
						x = px+(x-px)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else if(N-x <= 400&& N-x >200&&pa!=0){
						x = x+(N-x)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(N-x <=200&&ps!=0){
						x = x+(N-x)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else
					{
					    missile="xFalcon";	
					}	
				}
				
			}
			else
			{
				px=x;
				if(pm==1){
					x = (px-1)/2+1;
					if(px-x <= 400&& px-x >200&&pa!=0){
						x = x+(px-x)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(px-x <=200&&ps!=0){
						x = x+(px-x)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else if(x-1 <= 400&& x-1 >200&&pa!=0){
						x = 1+(x-N)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(x-1 <=200&&ps!=0){
						x = 1+(x-1)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else
					{
					    missile="xFalcon";	
					}
				}
				else if(pm==2){
					px = max(1,px-100);
					x = (px+1)/2;
						if(px-x <= 400&& px-x >200&&pa!=0){
						x = x+(px-x)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(px-x <=200&&ps!=0){
						x = x+(px-x)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else if(x-1 <= 400&& x-1 >200&&pa!=0){
						x = 1+(x-N)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(x-1 <=200&&ps!=0){
						x = 1+(x-1)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else
					{
					    missile="xFalcon";	
					}
					
				}
				else{
					px = max(1,px-200);
					x = (px+1)/2;
						if(px-x <= 400&& px-x >200&&pa!=0){
						x = x+(px-x)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(px-x <=200&&ps!=0){
						x = x+(px-x)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else if(x-1 <= 400&& x-1 >200&&pa!=0){
						x = 1+(x-N)/2;
						missile = "xAgni-V";
						pm=3;
						pa--;
					}
					else if(x-1 <=200&&ps!=0){
						x = 1+(x-1)/2;
						missile = "xSeaEagle";
						pm=2;
						ps--;
					}
					else
					{
					    missile="xFalcon";	
					}
			}
			}
			}
		}
		cout<<p<<endl;
		fflush(stdout);
		cout<<x<<" "<<missile<<endl;
		fflush(stdout);
	}
}
