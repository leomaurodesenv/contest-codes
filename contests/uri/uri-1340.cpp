/*
* Problema: Eu Posso Adivinhar a Estrutura de Dados!
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1340
*/

#include <iostream>
#include <string>

#include <vector>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int main(void){

	int n, code, out;
	bool stack_c, queue_c, priority_c;

	while(cin >> n){
        stack <int> stack_in;
        queue <int> queue_in;
        priority_queue <int> pq_in;

        stack_c = true, queue_c = true, priority_c = true;
        for(int i=0; i<n; i++){
            cin >> code >> out;
            if(code == 1){
                stack_in.push(out);
                queue_in.push(out);
                pq_in.push(out);
            }
            else{
                if(stack_in.empty()) stack_c = false;
                else{
                    if(stack_in.top() != out) stack_c = false;
                    stack_in.pop();
                }
                if(queue_in.empty()) queue_c = false;
                else{
                    if(queue_in.front() != out) queue_c = false;
                    queue_in.pop();
                }
                if(pq_in.empty()) priority_c = false;
                else{
                    if(pq_in.top() != out) priority_c = false;
                    pq_in.pop();
                }
            }
        }

        if (stack_c && !queue_c && !priority_c)
            cout << "stack" << endl;
        else if (!stack_c && queue_c && !priority_c)
            cout << "queue" << endl;
        else if (!stack_c && !queue_c && priority_c)
            cout << "priority queue" << endl;
        else if (!stack_c && !queue_c && !priority_c)
            cout << "impossible" << endl;
        else cout << "not sure" << endl;
	}

    return 0;
}
