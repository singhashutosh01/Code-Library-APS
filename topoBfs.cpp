ultiset <ll> mul;
vector<ll> topo;
    while(!mul.empty())
    {
        auto k=*mul.begin();
        topo.push_back(k);
        mul.erase(mul.begin());
        for(auto it:vec[k])
        {
            ind[it]--;
            if(!ind[it])
                mul.insert(it);
        }
    }
