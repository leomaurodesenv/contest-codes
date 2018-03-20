/** -------------------------------------------------------------------------- **/
/** Operações com String **/
/** -------------------------------------------------------------------------- **/

// Passa um valor inteiro para uma string
string r;
stringstream strstrem;

strstrem<<n;
strstrem>>r;

// Formata um char*
char buffer [50];
int n, a=5, b=3;
n=sprintf (buffer, "%d plus %d is %d", a, b, a+b);
printf ("[%s] is a string %d chars long\n",buffer,n);

// Parser string
std::string s = "scott>=tiger";
std::string delimiter = ">=";
std::string token = s.substr(0, s.find(delimiter)); // token is "scott"