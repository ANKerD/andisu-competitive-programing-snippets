struct point{
	ld x, y;
	point(ld _x, ld _y){x = _x, y=_y;}
	point operator -(point a){ return point(x-a.x,y-a.y); }
	bool operator == (point p){return x==p.x&&y==p.y;}
};
int st[maxn];
int query(int i){
	int sum = 0;
	for(; i; i-=(i&(-i))) sum += st[i];
		return sum;
	}
	void update(int i, int val)  {
		for(; i < maxn; i+=(i&(-i))) st[i] += val;
}
