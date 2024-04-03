/*
 * pascal.cpp
 * For updates, please visit <https://www.wesenhaft.com/>.
 *
 * pascal.cpp is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation version 2 of the License.
 *
 * pascal.cpp is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "config.h"
#include <iostream>

int main(int argc, char** argv)
{
    std::cout << "Version " << pascal_VERSION_MAJOR << "." << pascal_VERSION_MINOR << std::endl;
    std::cout << "Using "
            << (argc > 1 ? argv[1] : argv[0])
            << std::endl;

    return 0;
}

