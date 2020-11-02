int powint(int x, int y){
    int result=1 ;
    for(int k=0; k<y ; k++){
        
        result *=x ;
    }
    return result ;
}