/** -------------------------------------------------------------------------- **/
/** Retorna a quantidade de fatores primos **/
// Contar o numero de fatores primos de N
// Contar o numero de diferentes fatores primos de N
// Somar os fatores primos de N
// Contar o número de divisores de N
// -> N = a^i x b^j...c^k => (i+1)x(j+1)...(k+1)
// Somar os divisores de N
// -> ans *=> (lli) (pow(pr, power) + 1)/ (pr - 1);
// -> if(n != 1) ans *=> (pow(n, 2) - 1) / (n - 1);
/** -------------------------------------------------------------------------- **/

vector <int> fator_primo(lli n){
	vector <int> fatores;
	lli pr_index = 0, pr = primes[pr_index];
	// Para quando primo < sqrt(n) ou rodou todos os primos
	while(n != 1 && (pr*pr) <= n && pr_index < primes.size()){ 
		// Inseri todos os pr's possiveis (até repetidos)
		while(n % pr == 0){ n /= pr; fatores.push_back(pr); }
		pr = primes[++pr_index];
	}
	
	if(n != 1) fatores.push_back(n);
	return fatores;
}