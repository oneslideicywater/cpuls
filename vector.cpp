vector是C++中能够实现数组大小收缩和扩张，并且拥有很多API的方法用来管理数组元素。
比如用迭代子遍历数组
void print(vector<int> oper) {
	vector<int>::iterator iter = oper.begin();
	for (; iter < oper.end(); iter++) {
		cout << *iter << "|";

	}
	cout << endl;
}

令我最印象深刻的是vector.at(）既可以当成值，也可以当成指针
for (; iter < root.end(); iter++) {
		root.at(i) = root.at(i)+i;
}

在数组前面插入一个元素
vector.insert(vector.begin(),111);
移除指定指针元素
vector.erase(vector.begin()+i);
