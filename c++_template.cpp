#ifdef LOCAL
#include "local.h"
#else
#include <bits/stdc++.h>
#define debug(...) 17
#endif

using namespace std; namespace std {
	// some weird definitions
	#define _ first
	#define __ second
	#define gint __GET<i64>()
	#define gstr __GET<str>()
	#define min(args...) min({args})
	#define max(args...) max({args})
	#define all(a) (a).begin(), (a).end()
	#define bg2(a) (a).begin(), (a).begin()
	#define rall(a) (a).rbegin(), (a).rend()
	#define rbg2(a) (a).rbegin(), (a).rbegin()
	#define forn(i, b) for (int i = 0, _n_ = (b); i < _n_; i++)
	using i64 = long long;              using str = string;
	using u64 = unsigned long long;     using dbl = double;
	using p32 = pair<int, int>;         using p64 = pair<i64, i64>;

	// some helpless functions (cuz it can't help my brain reach 20iq lul)
	template<typename A, typename B> bool maxz(A &a, B b)
		{ return a < b ? a = b, true : false; }
	template<typename A, typename B> bool minz(A &a, B b)
		{ return b < a ? a = b, true : false; }
	i64 pwm(i64 a, i64 b, i64 m) {
		i64 res = 1; for (; b; b >>= 1, a *= a)
		if (b & 1) res *= a, res %= m; return res;
	} template <typename T> T pw(T a, i64 b) {
		if   (T res = a; b-- == 0) return 1ll;
		else { for (; b; b  >>= 1, a *= a)
			if (b & 1) res *= a; return res; }
	} template<typename T> T __GET() { T x; return cin >> x, x; }
	template <typename T> T minv(T a, T m) {
		if (a %= m; a < 0) a += m;
		int x = a, y = m, u = 1, v = 0;
		while (x != 0) { T t = y / x;
			swap(x, y -= t * x);
			swap(u, v -= t * u);
		} return v < 0 ? v + m : v;
	} mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
	template<class... Args>
	auto vctr(size_t n, Args&&... args) {
		if constexpr(sizeof...(args) == 1) return vector(n, args...);
		else return vector(n, vctr(args...));
	} i64 rand(i64 a, i64 b) { return uniform_int_distribution<i64>(a, b)(rng); }
	const i64 FIXED_RANDOM = rng();
	const i64 e30 = 1ll << 30,  e60 = 1ll << 60;
	const dbl PI  = acos(-1),   eps = 1e-7;
	const i64 md  = 1e9 + 7,    _md = 1e9 + 1617;
	struct custom_hash {
		static u64 _splitmix64_(u64 x) {
			x += 0x9e3779b97f4a7c15; x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
			x = (x ^ (x >> 27)) * 0x94d049bb133111eb; return x ^ (x >> 31); }
		size_t operator()(u64 x) const { return _splitmix64_(x + FIXED_RANDOM); }
	};
};
// standard namespace, nothing special 🐧



/* -----------------[ MAIN CODE GOES HERE ]----------------- */
int main() {
	cin.tie(nullptr) -> sync_with_stdio(false);
	
}

















// ------------------------------------------                    |\__/,|   (`\
// | author: dlbm1302 | created: 17.07.2021 |                  _.|o o  |_   ) )
// -----------------------------------------------------------(((---(((------------