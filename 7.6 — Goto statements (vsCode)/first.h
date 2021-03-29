
void printCats(bool skip)
{
    if(skip)
        goto end;// jump forward; statement label 'end' is visible here due to it having function scope
    
    std::cout << "Cats" << '\n';

end:
    ;// statement labels must be associated with a statement
}