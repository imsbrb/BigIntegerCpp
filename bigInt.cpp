//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int integer_len(int num) {
//    int count = 0;
//    while (num != 0) {
//        num = num / 10;
//        count++;
//    }
//    return count;
//}
//
//void number_conversion(char*& arr, int num) {
//    int length = integer_len(num);
//    int index = length - 1; 
//    while (num > 0 && index >= 0) {
//        int digit = num % 10;
//       
//        num /= 10;
//        arr[index] = digit +'0';
//        index--;
//    }
//    arr[length] = '\0';
//}
//
//class BigInteger {
//private:
//    char* number;
//    int digits;
//    char sign;
//public:
//    BigInteger() {
//        number = new char[1];
//        number[0] = '\0';
//        digits = 0;
//        sign = '+';
//    }
//
//    BigInteger(const char* num) {
//        int l = strlen(num);
//        number = new char[l + 1];
//        sign = num[0];
//        digits = l - 1;
//        for (int i = 0; i < l; i++) {
//            number[i] = num[i];
//        }
//        number[l] = '\0';
//    }
//
//    BigInteger(int num) {
//        digits = integer_len(num);
//        number = new char[digits + 1];
//        sign = (num < 0) ? '-' : '+';
//        number_conversion(number, abs(num));
//    }
//
//    BigInteger(const BigInteger& num) {
//        sign = num.sign;
//        digits = num.digits;
//        number = new char[digits + 2];
//        strncpy_s(number, digits + 2, num.number, digits+1);
//        number[digits+1] = '\0';
//        
//    }
//
//    BigInteger add(BigInteger& num) {
//        BigInteger result;
//
//        int number1 = atoi(this->number);
//        int number2 = atoi(num.number);
//        int result_num = number1 + number2;
//
//        result.sign = (result_num < 0) ? '-' : '+';
//        number_conversion(result.number, abs(result_num));
//        result.digits = integer_len(result_num);
//
//        return result;
//    }
//
//    BigInteger subtract(BigInteger& num) {
//        BigInteger result;
//
//        int number1 = atoi(this->number);
//        int number2 = atoi(num.number);
//        int result_num = number1 - number2;
//
//        result.sign = (result_num < 0) ? '-' : '+';
//        number_conversion(result.number, abs(result_num));
//        result.digits = integer_len(result_num);
//
//        return result;
//    }
//
//    BigInteger multiply(BigInteger& num) {
//        BigInteger result;
//
//        int number1 = atoi(this->number);
//        int number2 = atoi(num.number);
//        int result_num = number1 * number2;
//
//        result.sign = (result_num < 0) ? '-' : '+';
//        number_conversion(result.number, abs(result_num));
//        result.digits = integer_len(result_num);
//
//        return result;
//    }
//
//    BigInteger divide(BigInteger& num) {
//        BigInteger result;
//
//        int number1 = atoi(this->number);
//        int number2 = atoi(num.number);
//        int result_num = number1 / number2;
//
//        result.sign = (result_num < 0) ? '-' : '+';
//        number_conversion(result.number, abs(result_num));
//        result.digits = integer_len(result_num);
//
//        return result;
//    }
//    
//    void print() {
//        cout << "sign: " << sign << endl << "Number: " << number << endl;
//    }
//
//   /* ~BigInteger() {
//        if (number) {
//            delete[] number;
//        }
//    }*/
//};
//
//void main() {
//    // Create two BigInteger objects
//    cout << "Number 1 : 1500\n Number 2: 1000\n";
//    BigInteger b1("1500000000000000001");
//    BigInteger b2(1000);
//
//    cout << "Addition: ";
//    BigInteger sum = b1.add(b2);
//    sum.print();
//
//    cout << "Subtraction: ";
//    BigInteger diff = b1.subtract(b2);
//    diff.print();
//
//    cout << "Multiplication: ";
//    BigInteger product = b1.multiply(b2);
//    product.print();
//
//    cout << "Division: ";
//    BigInteger quotient = b1.divide(b2);
//    quotient.print();
//
//    
//}
