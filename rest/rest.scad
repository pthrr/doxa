s = 10;
rf = 0.5*s;
aj = 22;

lb = 10*s;
ls = 5*s;

db = 4*s;
ds = db;

dbt = 0.1*s;
dbs = dbt;

hb = 0.1*s;
hs = hb;

hbt = 1*s;
hst = hbt;

module wedge(db,lb,hb,dt,lt,ht) {
    hull() {
        cube([db, lb, hb]);
        translate([0, 0, hb]) cube([dt, lt, ht]);
    }
}

minkowski() {
    wedge(db, lb, hb, dbt, lb, hbt);
    rotate(-aj) translate([0, db/2+lb, 0]) wedge(db, lb, hb, dbt, lb, hbt);
    sphere(r=rf);
}