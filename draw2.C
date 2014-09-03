
void draw2(){

	TF1 *f = new TF1("f","sin(x)",0,20);
	f->Draw();

}
