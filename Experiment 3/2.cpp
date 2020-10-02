sco3 :: ~sco3 () {
	std :: cout << "Deleted!" << std :: endl;
}
sco3 :: sco3 (sco1 a, sco2 b) : px (a), py (b) {
	tot1 = a.Get_Chinese_score () + a.Get_Math_score () + a.Get_English_score ();
	tot2 = b.Get_History_score () + b.Get_Physics_score () + b.Get_Chemistry_score ();
	tot = tot1 + tot2;
	std :: cout << "Created!" << std :: endl;
}
sco3 :: sco3 (sco3 &p) : px (p.px), py (p.py) {
	tot1 = p.tot1, tot2 = p.tot2, tot = p.tot;
	std :: cout << "Copied!" << std :: endl;
}
int sco3 :: Get_Score_tot1 () {
	return tot1;
}
int sco3 :: Get_Score_tot2 () {
	return tot2;
}
int sco3 :: Get_Score_tot () {
	return tot;
}