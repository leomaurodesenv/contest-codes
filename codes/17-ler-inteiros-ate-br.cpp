/** -------------------------------------------------------------------------- **/
/** Ler inteiros até um \n **/
/** -------------------------------------------------------------------------- **/

int main() {
    std::string tmp;
    while(std::getline(std::cin, tmp)) {
        std::vector<int> nums;
        std::stringstream ss(tmp);
        int ti;
        while(ss >> ti) 
            nums.push_back(ti);
        //do stuff with nums
    }
    return 0;
}