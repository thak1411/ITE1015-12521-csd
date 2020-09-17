#include <iostream>
#include <string>
namespace rn {
    /**
     * std::string 배열에서 앞 n개를 출력합니다.
     * @param sr - string타입의 배열로 출력할 스트링 배열입니다.
     * @param n - 배열의 길이를 의미합니다. ( 디폴트 범위는 5입니다. )
     */
    void printStringArray(std::string* sr, int n = 5) {
        for (int i = 0; i < n; ++i) std::cout << sr[i] << '\n';
    }
    /**
     * x, y 좌표가 유의미한 좌표인지 확인합니다.
     * 기본적으로 0, 0 부터 특정 구간까지 유의미한 좌표이며 음수 좌표는 유의미한 좌표가 아닙니다.
     * rx, ry는 열린 구간으로 동일한 값 ( x == rx )은 유의미한 값으로 체크하지 않습니다.
     * @param x - 확인할 x좌표
     * @param y - 확인할 y좌표
     * @param rx - 유의미한 x 좌표의 범위 ( 디폴트 범위는 5입니다. )
     * @param ry - 유의미한 y 좌표의 범위 ( 디폴트 범위는 5입니다. )
     * @return 유의미한 좌표라면 true 아니라면 false를 반환합니다.
     */
    bool inMap(int x, int y, int rx = 5, int ry = 5) {
        return x > -1 && y > -1 && x < rx && y < ry;
    }
}
int main() {
    std::string mp[5];
    for (int i = 5; i--; ) mp[i] = ".....";
    for (int i = 5; i--; ) {
        int x, y;
        std::cin >> x >> y;
        if (!rn::inMap(x, y)) break;
        mp[y][x] = '*';
        rn::printStringArray(mp);
    }
    return 0;
}