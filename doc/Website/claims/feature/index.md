---
title: "Feature"
layout: base
---

<div class="row">
  <div class="col-sm-2 hidden-xs" id="navbar-side"> 
    <ul class="nav nav-pills nav-stacked" data-spy="affix" data-offset-top="200">
      <li role="presentation" class="tab-side" id="toFeature">
        <a href="#feature">
          Feature
        </a>
      </li>	
      <li role="presentation" class="tab-side" id="toPerformance">
        <a href="#performance">
          Performance
        </a>
      </li>
      <li role="presentation" class="tab-side" id="toTeam">
        <a href="#team">
          Team
        </a>
      </li>
      <li role="presentation" class="tab-side" id="toPublications">
        <a href="#publications">
          Publications
        </a>
      </li>
    </ul>
  </div>
  <div class="col-sm-10 col-xs-12 main-content">
		<div markdown="1">

CLAIMS is an open source system for concurrent data ingestion & data analysis running on a distributed in-memory cluster. CLAIMS extends traditional parallel database technologies with runtime dynamic execution as well as high throughput concurrent data ingestion to achieve real-time data analysis together with data which are being ingesting right after newly produced, as well as provides expressive and optimizable programming interfaces and at the same time efficient and scalable execution. 


Feature
--

**CLAIMS** (CLuster-Aware In-Memory SQL Engine) is a parallel in-memory database system, which runs on clusters of commodity servers and provides fast data analysis on relational dataset.

CLAIMS implements ture pipeline execution in tradutional parallel databases with massively scalability:

* It relies on highly parallel query processing engine;

* It dramatically accelerates data analysis speed;

* Queries are evaluated across the cluster, with both vertical & horizontal parallelism;;

* To leverage the computation power of multi-core hardware, queries are evaluated in a multi-thread fashion.

CLAIMS proposes a novel elastic pipelining:

* It can automatically adjust the intra-node parallelism of each query according to the runtime workload;

* To accelerate the data processing, those execution fragments which used to detect the performance bottleneck of the whole query are given more parallelism;

* To avoid unnecessary computation allocation, the parallelism of execution fragments that are detected to be over-producing will be decreased.

</div>
		<img src="/claims/img/elastic_pipelining.jpg" width="782" height="347">
		<div class="blank"></div>
		<div markdown="1">
CLAIMS also proposes a novel elastic pipelining query processing model:

* The parallelism of different execution fragments in a pipelined is self-adaptive with each other and results in an optimal intra-node parallelism assignment.

CLAIMS aims efficient in-memory data processing:

* Employs a large set of optimization techniques:

  * batch-at-a-time processing;

  * cache-sensitive operators;

  * SIMD-based optimization;

  * Code generation;

  * Lock-free;

  * Concurrent processing structures.

* These optimizations collaborate together and enable CLAIMS to process up to gigabytes data per second within a single thread.

CLAIMS emphasizes on network communication optimization:

* Parallel query processing imposes high burdens on network communication, which becomes the performance bottleneck for in-memory parallel databases due to the relatively slow network bandwidth comparing to the efficient in-memory data processing throughput.

* CLAIMS has its own method to optimize this:

  * Implements a sophisticated selectivitiy propagation system and a cost model, used by the query optimizer of CLAIMS to generate physical query plans with minimized network communication cost;

  * Deploys a new data exchange implementation, which offers efficient, scalable and skew-resilient network data communication among CLAIMS instances.

</div>
    <hr />
		<div markdown="1" id="Performance">
Performance
--

Benefited from both the smart and massive parallelism and the optimizations tailored to in-memory data processing, CLAIMS is up to 5X faster than Shark and Impala, two state-of-the-art systems in the open source community, in the queries over TPCH dataset and Shanghai Stock Exchange dataset.

</div>
		<img src="/claims/img/performance.jpg">
		<div class="blank"></div>
    <hr />
		<div markdown="1" id="Team">
Team
--
Aoying Zhou, professor in East China Normal University,  in charge of this project.

[Minqi Zhou](https://github.com/polpo1980), associate professor in East China Normal University, in charge of this project.

[Li Wang](https://github.com/wangli1426), a Ph.D. student in East China Normal University, manages the master students in this team and is responsible for designing and implementing the key components of CLAIMS, including query optimizer, catalog, physical operators, distributed communication infrastructure, storage layout, etc.

[Lei Zhang](https://github.com/egraldlo) is responsible for designing and implementing the key components of CLAIMS, including query optimizer, physical operators, persistent data exchange, storage management, etc.

[Shaochan Dong](https://github.com/scdong) is responsible for designing and implementing in-memory index and index management, data types, as well as data loading and importing.

[Zhuhe Fang](https://github.com/fzhedu) is mainly responsible for designing and implementing SQL DML parser and physical operators.

[Kai Yu](https://github.com/yukai2014) is mainly responsible for designing and implementing SQL DDL parser, catalog persistence.

[Yongfeng Li](https://github.com/NagamineLee) was a formal member of CLAIMS, who participated in designing and implementing catalog model.

Lin Gu is responsible for designing the demo cases of CLAIMS.

</div>
    <hr />
		<div markdown="1" id="Publications">
Publications
--

Foundational Publications

1. Li Wang, Minqi Zhou, Zhenjie Zhang, Yin Yang, Ming-chien Shan, Aoying Zhou. Elastic Pipelining in In-Memory Database Cluster. SIGMOD 2016 to appear. [Paper]({{ site.baseurl }}/claims/documents/CLAIMS-RT.pdf).

Research Publications

1. Li Wang, Minqi Zhou, Zhenjie Zhang, Ming-chien Shan, Aoying Zhou. NUMA-aware Scalable and Efficient Aggregation on Large Domains. Accepted by TKDE. [Paper]({{ site.baseurl }}/claims/documents/TKDE2014.pdf).

2. Li Wang, Lei Zhang, Chengcheng Yu, Aoying Zhou. Optimizing Pipelined Execution for Distributed In-memory OLAY System. In: DaMen 2014. Springer. 2014. pp. 35-56.

3. Lei Zhang, Minqi Zhou, Li Wang, LCDJ: Locality Conscious Join Alogrithm for In-memory Cluster Computing, Journal of East China Normal University, 2014.

Survey Publications

1. Lan Huang, Ke Xun, Xiaozhou Chen, Minqi Zhou, In-memory Cluster Computing: Interactive Data Analysis, Journal of East China Normal University, 2014.

2. Shaochan Dong, Minqi Zhou, Rong Zhang，Aoying Zhou, In-Memory Index：Performance Enhancement Leveraging on Processors, Journal of East China Normal University,2014.

3. Xinzhou Zhang, Minqi Zhou,A Survey of Fault Tolerance and Fault Recovery Technique in Large Distributed Parallel Computing System, Journal of East China Normal University,2014.

4. Lei Zhang, Zhuhe Fang, Minqi Zhou，Lan Huang, Join Algorithms Towards In-memory Computing, Journal of East China Normal University, 2014.

5. Yongfeng Li, Minqi Zhou, Hualiang Hu, Survey of resource uniform management and scheduling in cluster, Journal of East China Normal University, 2014.

Benchmark Publications

1. Ling Gu, Minqi Zhou, Qiangqiang Kang, and Aoying Zhou, A Scalable Framework for Universal Data Generation in Parallel,TPCTC 2014.[Paper]({{ site.baseurl }}/claims/documents/TPCTC2014.pdf).

2. Ling Gu, Minqi Zhou, Zhenjie Zhang, Ming-Chien Shan, Aoying Zhou, Marianne Winslett, Chronos: An Elastic Parallel Framework for Stream Benchmark Generation and Simulation, ICDE 2015. [Paper]({{ site.baseurl }}/claims/documents/ICDE15_Chronos.pdf).

</div>
	</div>
</div>
