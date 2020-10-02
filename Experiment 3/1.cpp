Student :: Student (int Chi, int Mat, int Eng) {
	Chinese	= Chi, Math = Mat, English = Eng;
	puts ("Created!");
}
Student :: Student (Student &peo) {
	Chinese = peo.Chinese, Math = peo.Math, English = peo.English;
	puts ("Copied!");
}
Student :: ~Student () {
	puts ("Deleted!");
}
int Student :: Get_Chinese_score () {
	return Chinese;
}
int Student :: Get_Math_score () {
	return Math;
}
int Student :: Get_English_score () {
	return English;
}