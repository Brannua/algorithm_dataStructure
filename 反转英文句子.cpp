
/**
* 'one two  three' => 'three  two one'
*/

#include <iostream>
using namespace std;

// 反转子串
void reverseSubString(string &str, int beforeIdx, int afterIdx)
{
	while (beforeIdx < afterIdx)
	{
		char temp = str[beforeIdx];
		str[beforeIdx] = str[afterIdx];
		str[afterIdx] = temp;
		beforeIdx++;
		afterIdx--;
	}
}

string &reverseSentence(string &str)
{
	reverseSubString(str, 0, str.size() - 1); // 'one two  three' => 'eerht  owt eno'

    // 开始匹配单词，然后反转单词
	for (unsigned int beforeIdx = 0, afterIdx; beforeIdx < str.length(); beforeIdx = afterIdx + 1)
	{
		while (str[beforeIdx] == ' ')
		{
			beforeIdx++;
		}
		afterIdx = beforeIdx;
		while (str[afterIdx + 1] != ' ' && str[afterIdx + 1] != '\0')
		{
			afterIdx++;
		}
		reverseSubString(str, beforeIdx, afterIdx);
	}

	return str;
}

int main()
{
	string foo = " one two  three  ";
	cout << "句子反着读是: " << reverseSentence(foo) << endl;
	return 0;
}

// -------------------------------------------------------------------

/**
* 以下为用 JavaScript 的实现方式
* 'one two  three' => 'three  two one'
*/

// // 字符数组原地反转方法一，老原生了
// function _reverse(arr, left, right) {
//   while (left < right) {
//     arr[left] = arr[left] + arr[right];
//     arr[right] = arr[left].split(arr[right]).join('');
//     arr[left] = arr[left].split(arr[right]).join('');
//     left ++;
//     right --;
//   }
// }

// // 字符数组原地反转方法二，老原生了
// function _reverse(arr, left, right) {
//   while (left < right) {
//     arr[left] = arr[left] + arr[right];
//     arr[right] = arr[left].substring(0, arr[left].length - arr[right].length);
//     arr[left] = arr[left].substring(arr[left].length - arr[right].length);
//     left ++;
//     right --;
//   }
// }

// // 字符数组原地反转方法三，es6 解构赋值
// function _reverse(arr, left, right) {
//     while (left < right) {
//         [arr[left], arr[right]] = [arr[right], arr[left]];
//         left++;
//         right--;
//     }
// }

// function reverseByWord(str) {
//     const arr = str.split('');

//     // 反转操作，在这里写代码，直接操作现在的数组，不允许 创建新的数组 或者 字符串
//     arr.reverse();
//     let prevBreakIndex = 0, breakIndex; // 默认单词开始位置是 0，单词结束位置未知
//     for (let i = 0, len = arr.length; i < len; i++) {
//         // 判断单词的开始位置是否需要更新
//         if (arr[i] == ' ') {
//             prevBreakIndex = i + 1;
//             continue;
//         }
//         // 找单词的结束位置
//         const next = i + 1;
//         if (arr[next] == ' ' || next == arr.length) {
//             breakIndex = i; // 单词的结束位置
//             // 找好了一个单词就反转它
//             _reverse(arr, prevBreakIndex, breakIndex);
//         }
//     }

//     return arr.join('');
// }

// const str = 'jin nian  guo   jie bu  shou       li';
// const res = reverseByWord(str);
// console.log(res);

// // 下面写个方法简单多了
// // 'one two  three' => 'eerht  owt eno' => 'three  two one'
// function reverseByWord(str = '') {
//     return str.split(' ').reverse().join(' ');
// }
// const str = 'one two    three';
// const res = reverseByWord(str);
// console.log(res);
