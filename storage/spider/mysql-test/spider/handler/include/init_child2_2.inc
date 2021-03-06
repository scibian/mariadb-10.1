let $CHILD2_2_DROP_TABLES=
  DROP TABLE IF EXISTS ta_r3;
let $CHILD2_2_CREATE_TABLES=
  CREATE TABLE ta_r3 (
    a INT DEFAULT 10,
    b CHAR(1) DEFAULT 'c',
    c DATETIME DEFAULT '1999-10-10 10:10:10',
    PRIMARY KEY(a)
  ) $CHILD2_2_ENGINE $CHILD2_2_CHARSET;
let $CHILD2_2_DROP_TABLES5=
  DROP TABLE IF EXISTS ta_r_int;
let $CHILD2_2_CREATE_TABLES5=
  CREATE TABLE ta_r_int (
    a INT AUTO_INCREMENT,
    b INT DEFAULT 10,
    c INT DEFAULT 11,
    PRIMARY KEY(a),
    KEY idx1(b),
    KEY idx2(c)
  ) $CHILD2_2_ENGINE $CHILD2_2_CHARSET;
let $CHILD2_2_SELECT_TABLES=
  SELECT a, b, date_format(c, '%Y-%m-%d %H:%i:%s') FROM ta_r3 ORDER BY a;
let $CHILD2_2_DROP_FT_TABLES=
  DROP TABLE IF EXISTS ft_r3;
let $CHILD2_2_CREATE_FT_TABLES=
  CREATE TABLE ft_r3 (
    a INT DEFAULT 0,
    b TEXT,
    c TEXT,
    d TEXT,
    PRIMARY KEY(a),
    FULLTEXT INDEX ft_idx1(b),
    FULLTEXT INDEX ft_idx2(c)
  ) $CHILD2_2_FT_ENGINE $CHILD2_2_FT_CHARSET;
let $CHILD2_2_SELECT_FT_TABLES=
  SELECT a, b, c, d FROM ft_r3 ORDER BY a;
let $CHILD2_2_DROP_GM_TABLES=
  DROP TABLE IF EXISTS gm_r3;
let $CHILD2_2_CREATE_GM_TABLES=
  CREATE TABLE gm_r3 (
    a INT DEFAULT 0,
    b GEOMETRY NOT NULL,
    c GEOMETRY NOT NULL,
    PRIMARY KEY(a),
    SPATIAL INDEX sp_idx1(b),
    SPATIAL INDEX sp_idx2(c)
  ) $CHILD2_2_GM_ENGINE $CHILD2_2_GM_CHARSET;
let $CHILD2_2_SELECT_GM_TABLES=
  SELECT a, b, c FROM gm_r3 ORDER BY a;
let $CHILD2_2_DROP_LOCK_TABLES1=
  DROP TABLE IF EXISTS t1_2;
let $CHILD2_2_CREATE_LOCK_TABLES1=
  CREATE TABLE t1_2 (
    id int(11) NOT NULL,
    PRIMARY KEY (id)
  ) $CHILD2_2_ENGINE $CHILD2_2_CHARSET;
let $CHILD2_2_DROP_LOCK_TABLES2=
  DROP TABLE IF EXISTS t2_1;
let $CHILD2_2_CREATE_LOCK_TABLES2=
  CREATE TABLE t2_1 (
    id int(11) NOT NULL,
    PRIMARY KEY (id)
  ) $CHILD2_2_ENGINE $CHILD2_2_CHARSET;
let $CHILD2_2_DROP_INCREMENT_TABLES1=
  DROP TABLE IF EXISTS t1_2;
let $CHILD2_2_CREATE_INCREMENT_TABLES1=
  CREATE TABLE t1_2 (
    id int(11) NOT NULL AUTO_INCREMENT,
    PRIMARY KEY (id)
  ) $CHILD2_2_ENGINE $CHILD2_2_CHARSET;
let $CHILD2_2_SELECT_INCREMENT_TABLES1=
  SELECT id FROM t1_2 ORDER BY id;
let $CHILD2_2_AUTO_INCREMENT_INCREMENT1=
  SET GLOBAL AUTO_INCREMENT_INCREMENT = 1;
let $CHILD2_2_AUTO_INCREMENT_INCREMENT2=
  SET GLOBAL AUTO_INCREMENT_INCREMENT = 4;
let $CHILD2_2_AUTO_INCREMENT_OFFSET1=
  SET GLOBAL AUTO_INCREMENT_OFFSET = 1;
let $CHILD2_2_AUTO_INCREMENT_OFFSET2=
  SET GLOBAL AUTO_INCREMENT_OFFSET = 3;
