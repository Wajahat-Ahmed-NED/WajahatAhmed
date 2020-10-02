class b{
    public:
    b(){
        
    }
    void show(){
        cout<<"Iam base"<<endl;
    }
};
class d:public b{
    public:
    c(){};
    void show(){
        cout<<"I am derived";
    }
}