#ifdef LOCAL
#include <local.h>
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define debug(x...) 17
#endif

// libraries
using namespace std;
namespace std {
	// definitions
	#define _ first
	#define __ second
	#define read reader(),
	#define gint reader().getData<i64>()
	#define gstr reader().getData<str>()
	#define vrb(args...) args; read args
	#define all(a)  (a).begin(),  (a).end()
	#define rall(a) (a).rbegin(), (a).end()
	#define FOR(i, u, v) for (int i = (u), _n_ = (v); i < _n_; i++)
	#define ROF(i, u, v) for (int i = (u), _n_ = (v); --i >= _n_; )
	using i64 = long long;              using str = string;
	using u64 = unsigned long long;     using dbl = double;
	using p32 = pair<int, int>;         using p64 = pair<i64, i64>;

	// functions
	template<class A, class B> bool maxz(A &a, B b) { return a < b && (a = b, true); }
	template<class A, class B> bool minz(A &a, B b) { return b < a && (a = b, true); }
	mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
	i64 rand(i64 a, i64 b) { return uniform_int_distribution<i64>(a, b)(rng); }

	// constants
	const i64 FIXED_RANDOM = rng(), LUV = 17 * 83;
	constexpr i64 e30 = 1ll << 30,  e60 = 1ll << 60;
	constexpr dbl PI  = acos(-1),   eps = 1e-7;
	constexpr i64 md  = 1e9 + 7,    _md = 1e9 + 1617;

	// structures
	struct reader {
		template<class T> reader &operator,(T &x) {
			return ok &= !!(cin >> x), *this;
		} bool ok = true; operator bool() { return ok; }
		template<class T> static T getData() { T x; return cin >> x, x; }
	};
	template<class... Args> auto vctr(size_t n, Args&&... args) {
		if constexpr(sizeof...(args) == 1) return vector(n, args...);
		else return vector(n, vctr(args...));
	}
}



/* -----------------[ MAIN CODE GOES HERE ]----------------- */
int main() {
	cin.tie(nullptr) -> sync_with_stdio(false);
	
}

















// ------------------------------------------                    |\__/,|   (`\
// | author: dlbm1302 | created: 17.07.2021 |                  _.|o o  |_   ) )
// -----------------------------------------------------------(((---(((------------
