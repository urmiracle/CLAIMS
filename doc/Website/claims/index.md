---
title: "CLuster-Aware In-Memory SQL engine"
layout: base
---
<div class="row">
  <div class="col-sm-7 col-xs-12">
	  <h1>Characteristics</h1>
	  <div class="row">
			<div class="blank"></div>
		  <div class="col-xs-6 chara">
			  <h2><span class="glyphicon glyphicon-flash"></span>&nbsp;Real-time</h2>
			  <p>Real-time processing together with newly produced data ingestion</p>
			</div>
		  <div class="col-xs-6 chara">
		  	<h2><span class="glyphicon glyphicon-plane"></span>&nbsp;Reliable</h2>
			  <p>Shared-nothing cluster with fault-toleracne</p>
			</div>
		</div>
	  <div class="row">
		  <div class="col-xs-6 chara">
			  <h2><span class="glyphicon glyphicon-sort"></span>&nbsp;Scalable</h2>
			  <p>Elastic ececution engine with scale cluster</p>
			</div>
		  <div class="col-xs-6 chara">
			  <h2><span class="badge">SQL</span>&nbsp;SQL support</h2>
			  <p>Compatible with traditional databases</p>
			</div>
		</div>
	</div>
	<div class="col-sm-5 col-xs-12">
	  <h1>Stack</h1>
	  <div id="chart">
  	  <img src="{{ site.baseurl }}/claims/img/stack.png" id="chart-img"/>
		</div>
	</div>
</div>
<div class="row">
	<div class="col-xs-12">
	  <h1>Overview</h1>
	</div>
</div>
<div class="row">
  <div class="col-sm-2 hidden-xs" id="navbar-side"> 
    <ul class="nav nav-pills nav-stacked" data-spy="affix" data-offset-top="570">
      <li role="presentation" class="tab-side" id="toBackgroud">
      	<a href="#background">
        	Background
        </a>
      </li>	
      <li role="presentation" class="tab-side" id="toHighlights">
      	<a href="#highlights">
        	Highlights
        </a>
      </li>
    </ul>
  </div>
  <div class="col-sm-10 col-xs-12 main-content">
	 <div markdown="1">

CLAIMS is an open source system for concurrent data ingestion & data analysis running on a distributed in-memory cluster. CLAIMS extends traditional parallel database technologies with runtime dynamic execution as well as high throughput concurrent data ingestion to achieve real-time data analysis together with data which are being ingesting right after newly produced, as well as provides expressive and optimizable programming interfaces and at the same time efficient and scalable execution. 


Background
--

There is an imperative need currently for real-time data analysis over massive historical data together with newly produced data to enhance both of analysis accuracy and business values. The advocated Lambda Architecture proposed by both Google and Twitter which combines both of real-time stream processing and batch processing, now is showing its drawbacks in the complexity of the post-processing, system debug and etc. Moreover, some of the mission-critical applications (i.e., the real-time general ledger in banks) require higher consistency level over data processing, which is hard or even impossible to be supported in Lambda Architecture. This means that general-purpose in-memory cluster computing platforms are in need, which are capable in processing concurrent data ingestion & real-time data analysis, and are more efficient, easier to use, and can support more applications than the existed Lambda Architecture, but are not restricted to a specific data model and language (such as the relational model and a variant of SQL). CLAIMS fulfils these needs. 

Highlights
--
We highlight the main characters of CLAIMS here:

* **High Throughput Data Ingestion** CLAIMS separates data stores into write-optimized data stores and read-optimized data stores, which are orchestrated together to ensure the consistency on query results without blocking each other, and consequently result in high throuphput concurrenty query processing. Furthermore, CLAIMS provides a novel runtime multi-version concurrency control on B+-trees index for data being ingesting, and evently achive data analysis with higher consistency (i.e.,conflict-serializability) over data which are newly produced.

* **Elastic Runtime Execution** CLAIMS has a distributed runtime which is based on the principles of parallel databases, providing true pipelining. CLAIMS’ distributed runtime has an embedded mechanism to dynamically adjust the internal parallelism in terms of current workloads in the cluster (i.e., CPU cycles usage, memory usage, network usage) to achieve balanced workload across query pipeline, even with a higher through-put, finally achieving the elastic execution over the generated static physical query plan. 
</div>
	</div>
</div>
<div class="row">
	<div class="col-sm-6 col-xs-12">
	  <h1>Quick Start</h1>
	  <p>There are <b>two ways</b> shooting CLAIMS.</p>
	  <p><button type="button" class="btn my-btn">Click Here</button> or <button type="button" class="btn my-btn">Click Here</button> so that you can launch it easily.</p>
	  <p>You may also turn to <a href="{{ site.baseurl }}/claims/2015/08/12/QuickStart.html">QuickStart</a> for help.</p>
	</div>
  <div class="col-sm-6 col-xs-12">
	  <h1>Documents</h1>
	  <div class="row">
	    <div class="col-xs-9">
    	  <ul class="list-group document-list">
    	  {% for document in site.posts limit:3 %}
      	  <li class="list-group-item"><span>{{ document.date | date_to_string }}</span> &raquo;
        	  <a href="{{ site.baseurl }}{{ document.url }}">{{ document.title }}</a>
      	  </li>
    	  {% endfor %}
    	  </ul>
		  </div>
	    <div class="col-xs-3">
    	  <a href="{{ site.baseurl }}/claims/documents/index.html" id="document-more">see more &raquo;</a>
			</div>
		</div>
	</div>
</div>
<div class="row">
	<div markdown="1" class="col-sm-4 col-xs-12">
Contact
==

Contact us (see [Team](/claims/feature/index.html#team) for emails) if you are interested in joining us!

***East China Normal University***

***Institute for Data Science and Engineering***

*3663 N.Zhongshan Rd. 200062 Shanghai China*

</div>
	<div markdown="1" class="col-sm-4 col-xs-12">
[Download](https://github.com/dase/CLAIMS)
==

CLuster-Aware In-Memory Sql engine.

CLAIMS is an In-memory parallel database prototype, which runs on a cluster of commodity servers and provides real-time data analysis over relational dataset.

</div>
	<div markdown="1" class="col-sm-4 col-xs-12">
About
==

The establishment of the Center for Cloud Computing and Big Data was approved by East China Normal University (ECNU) on June 19th, 2012. The mission is to build an international platform for big data-related research and development. [Learn more...](http://dase.ecnu.edu.cn/claims/index.html)

</div>
</div>

