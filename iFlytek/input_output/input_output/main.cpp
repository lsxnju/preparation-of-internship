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
    int a, b = 0;
    while (cin >> a) { // ע�� while ������ case
        if (cin.get() == '\n') {
            b += a;
            cout << b << endl;
            b = 0;
        }
        else {
            b = a + b;
        }
    }
}



/*
cin �������ո����tab��ֹͣ��ȡ��cin��ȡ�����Ǵӵ�һ���ǿհ��ַ���ʼ����һ���հ��ַ�����


*/