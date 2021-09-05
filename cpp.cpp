// Compilability: C++11 or above.
// Source: https://github.com/KozerG17/ST4-Snippets/blob/main/cpp.cpp

#ifdef LBM_LOCAL
#include <local.h>
#else
#include <bits/stdc++.h>
#define debug(x...) 17
#endif

// libraries
using namespace std;
namespace std {
	// macros
	#define _ first
	#define __ second
	#define all(a)  (a).begin(),  (a).end()
	#define rall(a) (a).rbegin(), (a).rend()
	#define For(i, u, v) for (int i = (u), _n_ = (v); i < _n_; i++)
	#define Rof(i, u, v) for (int i = (u), _n_ = (v); --i >= _n_; )

	// typedefs
	using i64 = long long;              using str = string;
	using u64 = unsigned long long;     using dbl = long double;
	using p32 = pair<int, int>;         using p64 = pair<i64, i64>;
	template<class T> using MaxHeap = priority_queue<T>;
	template<class T> using MinHeap = priority_queue<T, vector<T>, greater<T>>;

	// functions
	template<class A, class B> bool Maxz(A &a, B b) { return a < b && (a = b, true); }
	template<class A, class B> bool Minz(A &a, B b) { return b < a && (a = b, true); }
	mt19937_64 Rng(chrono::steady_clock::now().time_since_epoch().count());
	i64 Rand(i64 a, i64 b) { return uniform_int_distribution<i64>(a, b)(Rng); }

	// constants
	constexpr i64 e30 = 1ll << 30,  e60 = 1ll << 60;
	constexpr dbl pi  = acos(-1),   eps = 1e-7;
	constexpr i64 md  = 1e9 + 7,    _md = 1e9 + 1617;

	// devices
	class Reader {
	public:
		template<class T> Reader &operator,(T &x) {
			return ok &= !!(cin >> x), *this;
		} bool ok = true; operator bool() { return ok; }
		template<class T> static T getData() { T x; return cin >> x, x; }
	private:
		#define Read Reader(),
		#define Gint Reader::getData<i64>()
		#define Gstr Reader::getData<str>()
	};
}



/* -----------------[ MAIN CODE GOES HERE ]----------------- */
const short luv = 17 * 32;

int main() {
	cin.tie(nullptr) -> sync_with_stdio(false);
	
}

















// ------------------------------------------                    |\__/,|   (`\
// | author: dlbm1302 | created: 05.09.2021 |                  _.|o o  |_   ) )
// -----------------------------------------------------------(((---(((------------
