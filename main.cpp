#include <iostream>

int main() {
	std::cout << "HelloWorld!" << std::endl;

	// STEP 1：文字列の内容を変えよう
	// この文字列以外のものは動かさないでね
	std::cout << "１２３４" << std::endl;


	// Step 3：コミットの順番を入れ替えよう
	std::cout << "コミットの順番を入れ替えよう" << std::endl;

	// STEP 2：このコミットのメッセージを変えよう
	std::cout << "このコミットのメッセージを変えよう" << std::endl;

	// Step 3：コミットの順番を入れ替えよう
	std::cout << "コミットの順番を入れ替えよう" << std::endl;

	// Step 4.1：Squashで合併されるコミット
	std::cout << "合併されるコミット" << std::endl;

	// Step 4.2：Squashで合併するコミット
	std::cout << "合併するコミット" << std::endl;

	// Step 5.1：Fixupで合併されるコミット
	std::cout << "合併されるコミット" << std::endl;

	// Step 5.2：Fixupで合併されるコミット
	std::cout << "合併されるコミット" << std::endl;

	return 0;
}