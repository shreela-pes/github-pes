struct CustomerDetails {
    char name[50];
    char address[100];
    char phone[15];
};
struct CustomerDetails customer = {
        "name",
        "address",
        "phone"
    };
generate_bill(cart, customer);
