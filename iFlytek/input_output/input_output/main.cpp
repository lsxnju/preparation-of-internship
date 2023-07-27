/*#include <iostream>
using namespace std;


int main(int argc, char* argv[]) {
	int a, b;
	// multiple lines input
	while (cin >> a >> b) {
		cout << (a + b) << endl;
			
	}

	#include <iostream>
using namespace std;

int main() {
    int count;
    int num;
    int sum=0;
    while(true){
        cin>>count;
        if(count==0){
            break;
        }
        for(int i=0; i<count;i++){
            cin>>num;
            sum=sum+num;
        }
        cout<<sum;
    }
}
	return 0;

}
*/
/*
#include <iostream>
using namespace std;

int main() {
    int count;
    int num;
    int sum = 0;
    while (true) {
        cin >> count;
        if (count == 0) {
            break;
        }
        for (int i = 0; i < count; i++) {
            cin >> num;
            sum = sum + num;
        }
        cout << sum;
    }
}
*/

#include <iostream>
using namespace std;

int main() {

    int age = 20;
    ++age;

    cout <<++age<< "生日快乐！" << endl;

}



/*
cin 在遇到空格或者tab即停止读取，cin读取数据是从第一个非空白字符开始到下一个空白字符结束


*/