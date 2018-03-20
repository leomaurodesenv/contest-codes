/** -------------------------------------------------------------------------- **/
/** Operações de Mod **/
// a^b % c
/** -------------------------------------------------------------------------- **/

lli mod(lli a, lli b, lli c){
    if(b==0) return 1;
    if(b%2==0){
        lli x = mod(a, b/2, c);
        return (x*x)%c;
    }
    else return (a%c * mod(a,b-1,c))%c;
}

int main(void){

    lli r, b, p, m;

    /*
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    */

    while(cin>>b>>p>>m){
        r = mod(b, p, m);
        cout<<r<<endl;
    }

    return 0;
}
