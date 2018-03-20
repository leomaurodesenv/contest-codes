int bin2dec(string sbin){
    int dec = 0, pluser = 1, bini;
    sbin = string(sbin.rbegin(), sbin.rend());
    fore(i, 0, sbin.size()){
        //cout<<"sbin[i]:"<<sbin[i]<<" dec:"<<dec<<endl;
        bini = sbin[i] - 48;
        dec += bini * pluser;
        pluser *= 2;
    }
    return dec;
}