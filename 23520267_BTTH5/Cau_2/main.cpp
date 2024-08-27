#include <iostream>
#include <vector>
#include "Premium.hpp"
#include "Deluxe.hpp"
#include "Business.hpp"
#include "Hotel.hpp"
using namespace std;

int main()
{
    vector<Hotel*> ds;

    double doanh_thu_deluxe = 0;
    double doanh_thu_premium = 0;
    double doanh_thu_business = 0;

    ds.push_back(new Deluxe(1, 20000, 30000)); // Phong Deluxe a
    ds.push_back(new Deluxe(2, 20000, 15000)); // Phong Deluxe b
    ds.push_back(new Premium(3, 30000));       // Phong Premium c
    ds.push_back(new Premium(4, 30000));        // Phong Premium d
    ds.push_back(new Business(5));               // Phong Business e

    for (Hotel* hotel : ds) 
    {
        Deluxe* deluxe = dynamic_cast<Deluxe*>(hotel);
        if (deluxe) 
            doanh_thu_deluxe = doanh_thu_deluxe + deluxe->Doanh_thu();

        Premium* premium = dynamic_cast<Premium*>(hotel);
        if (premium) 
            doanh_thu_premium = doanh_thu_premium + premium->Doanh_thu();

        Business* business = dynamic_cast<Business*>(hotel);
        if (business) 
            doanh_thu_business = doanh_thu_business + business->Doanh_thu();
    }

    cout << "Doanh thu phong Deluxe: " << doanh_thu_deluxe << endl;
    cout << "Doanh thu phong Premium: " << doanh_thu_premium << endl;
    cout << "Doanh thu phong Business: " << doanh_thu_business << endl;

    if (doanh_thu_deluxe > doanh_thu_premium and doanh_thu_deluxe > doanh_thu_business)
    	cout << "Phong co doanh thu cao nhat la deluxe: " << doanh_thu_deluxe << endl;
    else if (doanh_thu_premium > doanh_thu_deluxe and doanh_thu_premium > doanh_thu_business)
    	cout << "Phong co doanh thu cao nhat la premium: " << doanh_thu_premium << endl;
    else
    	cout << "Phong co doanh thu cao nhat la business: " << doanh_thu_business << endl;
}
